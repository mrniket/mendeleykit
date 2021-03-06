Release Notes MendeleyKit v0.8.1
Date: October 2014


NOTES:
- Please read the LICENCE file and README.md

## MendeleyKit ##
This is the first public alpha release of MendeleyKit, the Objective-C SDK. Its purpose is to provide clients convenience methods and classes to interface with the Mendeley API.

## Min Requirements ##
- iOS 7.0 or higher
- for development XCode 5 or higher

(support for Mac OSX will be added in a later stage)

## Supported API calls ##

The following APIs are supported in 0.8.1
- /documents
- /folders
- /profiles
- /groups
- /trash
- /profiles
- /annotations
- /catalog: Only GET /catalog (with search params) and GET /catalog/{catalog_id}
- /identifier_types
- /document_types

All supported API calls are defined in MendeleyKit.h

## Not supported API calls ##
The following APIs are not supported in 0.8.1
- /search/catalog
- /enrichments/entities/{file hash}/systems
- create document from file (POST /documents with file/content-type)
- /enrichments/toc/{file hash}
- /disciplines
- /academic_statuses


## Getting started ##
We strongly recommend using cocoapods to include MendeleyKit into your project.
MendeleyKit comes with a MendeleyKit.podspec file.

Your project needs to create a Podfile with the following line in it
```
pod 'MendeleyKit', :git => 'https://github.com/Mendeley/mendeleykit.git'
```

From command line, simply do 
```
pod install
```
For further information on Cocoapods see [Cocoapods](http://cocoapods.org/).

## Registering your app to use with MendeleyKit ##
In order to use MendeleyKit in your client you will need to register your app at the 
[Mendeley API developer portal](http://dev.mendeley.com).

Registering an app will give you
- a client ID
- a client secret
- a redirect URI (this is used during OAuth authentication process)

In your client app, your first call should be to
[[MendeleyKitConfiguration sharedInstance] configureOAuthWithParameters:parameters];

where parameters is a dictionary containing the following key/value pairs
- kMendeleyOAuth2ClientIDKey : <your client ID>
- kMendeleyOAuth2ClientSecretKey : <your client secret>
- kMendeleyOAuth2RedirectURLKey : <your redirect URI>

## Using MendeleyKit ##
the Kit comes with example code to help you on your way

- Login process: MendeleyKit provides a MendeleyLoginController (UIViewController). This helper class provides users with the necessary web-access to authenticate on Mendeley. An example for this is provided in the ViewController.class in the MendeleyKitExample project

- MendeleyKit defines all supported API calls. All client calls should be made through methods defined in MendeleyKit

- as is usual these days, most methods in MendeleyKit make use of block based structure.

Examples obtaining a list of documents with specified query parameters
```
- (void)documentListWithQueryParameters:(MendeleyDocumentParameters *)queryParameters
                        completionBlock:(MendeleyArrayCompletionBlock)completionBlock;
```


