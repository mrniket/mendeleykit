# MendeleyKit the Mendeley SDK for Objective C #

Version: 0.8.1 alpha

Released: October 2014

** Important notice: this is an early pre-release version and is subject to change **

## About MendeleyKit ##
MendeleyKit is a standalone Objective C library providing convenience methods
and classes for using the [Mendeley API](http://dev.mendeley.com) in Mac OSX or
iOS applications.

Note, this is an alpha version of the MendeleyKit.

## Minimum Requirements ##

XCode 5.1.1
iOS 6.x, Mac OSX 10.8

## Installation/Cocoapod ##
The easiest way to include MendeleyKit in your project is to use cocoapods.
The Podfile in your project should include the following line

```
pod 'MendeleyKit', :git => 'https://github.com/Mendeley/mendeleykit.git'
```

From command line, simply do 
```
pod install
```

For further information on Cocoapods see [Cocoapods](http://cocoapods.org/).

Alternatively, you may clone the public MendeleyKit from our github repository.

## Getting Started ##
MendeleyKit XCode workspace includes a MendeleyKitExample project. This demonstrates
basic functionality such as authenticating with the Mendeley server, 
obtaining a list of documents, files and groups.

It is recommended to consult with the classes contained in the MendeleyKitExample project.

In addition the github repository includes a MendeleyKitHelp.zip file. This contains
a complete reference set in HTML and Docset format.

When running the MendeleyKitExample app, please ensure you have
- client ID
- client secret key
- redirect URI

They need to be entered in the ViewController.h file.
Note: code containing client IDs, client secrets, redirect URI will not be accepted in pull requests!

[Mendeley API](http://dev.mendeley.com) has links to create your app client id, key and redirect URIs.

## How to submit code ##
This is an early-bird version of the MendeleyKit. We welcome your thoughts and suggestions. If you would like to make active contributions, e.g. code changes/additions,

- code submissions should only be made to Development branch via pull requests. 
- you may create your own subbranches from Development and submit to it at will. However, if you want to merge it into Development then you would need to create a pull request
- Note: code containing client IDs, client secrets, redirect URI will not be accepted in pull requests!


## Software Releases ##
All official releases of the MendeleyKit are tagged versions on master. Mendeley reserves the rights to merge changes made to Development into master.
Each release will contain a RELEASE text file outlining changes made.


