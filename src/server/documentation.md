# server documentation

If a given function, method or class needs something (like another method or class, their defined above it e.g. with encrypt and pad_key)

The styling of class, function and variable names are from [PEP 0008](https://peps.python.org/pep-0008/#naming-conventions)
Classes - CapitalizedWords
Functions / Methods - lower_case_with_underscores
variables - lowercase or camelCase # At the moment they are also lower_case_with_underscores

## main
We import everything we need from flask (accessing request, jsonify, rendering websites, sending files, Thread-Safe Database), from flask_jwt_extended (JWT-Storage, create JWT token, needs jwt, get_associated_username), environment to make sure we're in the right directory for paths, typing for strong type-checking, sqlite3 for error message identification and secrets for token creation. The rest should be self-explanatory.

We also import the database module and the crypt module which are just a bunch of grouped functions and Classes.

We make sure all tables are created, then we give db the database path and a reference to the flask app instance we just created. This will be used to manage the database over multiple threads (flask is multithreaded by default), so we will create a new connection for each request the Database instance receives. For that to work we need the g object, which intern needs an flask app instance, so we pass the app too. These will be used in a decorator.

response is a function to standardize json responses. Routes '/' and '/download-file/' manage the front end website. This is done trough an argument called try_it_out that is passed over the web (like this website.com?try_it_out=1). If this parameter is passed the test web version of the app will be rendered otherwise the default home page. Download file gets an index that has to match in a dictionary (named file_indices) to get the path, if it doesn't find anything for the given index, it'll return the file not found page.

All internal methods that shouldn't be accessed by a normal user like '/sync' return a 404 page (like the normal 404 error), if the request type isn't 'POST'.

The routes '/register_client', '/get_shared_secret' and '/get_secure_shared_secret' aren't "protected" like that to make it possible to use this service only with the website (this isn't implemented yet).

The routes '/register' and '/login' are here to register a user and then give them a JWT token, so they can access the jwt protected routes needed for event selection and such.

'/revoke_token' is used to revoke a token that has been leaked or to log-out, if the user doesn't want to be remembered (has to log-in after every restart, even if the token hasn't expired yet).

The route '/find_matches_public' is used by the try_it_out webpage, so we don't need to create a JWT token for it.

The routes '/find_matches' and '/select_event' have been mentioned already.

Last are the error-handlers. They are just standard ways to deal with common error codes, such as 404. I decided to leave everything as a json response, except 404, because clients are unlikely to have a 404 error, but users do, so it's more beneficial to render a site.

The app is run with ssl_context='adhoc', this means the server will generate a self-signed certificate for https. You can get notices of this by your antivirus software sometimes. As it's your own server it's safe to ignore it, but definitely get a certificate signed by someone else, like [Let's Encrypt](https://letsencrypt.org), if you plan on running this server in a production environment.

Or you could generate your own localhost certificate for easier testing with less error codes, here's how to do it: 
Install chocolatey https://chocolatey.org/install
Type
```bash
choco install mkcert```
into the admin shell. Then run
```bash
mkcert -install
```
in your command shell to install the package. Lastly run 
```bash
mkcert localhost
```
in the root of the server and move the generated files into the cert directory.

You're done - Good job!
