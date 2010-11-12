// Copyright 2010 The Omni Group.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <Foundation/NSObject.h>
#import <OmniFileStore/OFSDAVFileManagerDelegate.h>

@class OFSFileManager;
@interface OUIWebDAVConnection : NSObject <OFSDAVFileManagerAuthenticationDelegate> {
@private 
    NSURL *_address;
    NSString *_username;
    NSString *_newKeychainPassword;
    
    OFSFileManager *_fileManager;
    NSURLAuthenticationChallenge *_authenticationChallenge;
}

+ (OUIWebDAVConnection *)sharedConnection;
- (BOOL)validConnection;
- (void)close;

@property (readwrite, retain) NSURL *address;
@property (readwrite, retain) NSString *username;
@property (readwrite, retain) NSString *newKeychainPassword;
@property (readonly, retain) OFSFileManager *fileManager;
@property (readonly, retain) NSURLAuthenticationChallenge *authenticationChallenge;

@end
