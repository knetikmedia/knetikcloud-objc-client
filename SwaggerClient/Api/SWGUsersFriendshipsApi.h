#import <Foundation/Foundation.h>
#import "SWGPageResourceSimpleUserResource_.h"
#import "SWGApi.h"

/**
* Knetik Platform API Documentation Latest
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://demo.sandbox.knetikcloud.com
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGUsersFriendshipsApi: NSObject <SWGApi>

extern NSString* kSWGUsersFriendshipsApiErrorDomain;
extern NSInteger kSWGUsersFriendshipsApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Add a friend
/// As a user, either creates or confirm a pending request. As an admin, call this endpoint twice while inverting the IDs to create a confirmed friendship.
///
/// @param userId The id of the user or 'me' if logged in
/// @param _id The id of the user to befriend
///  code:200 message:"OK",
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
-(NSNumber*) addFriendUsingPOSTWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;

/// Redeem friendship token
/// Immediately connects the requested user with the user mapped by the provided invite token
///
/// @param userId The id of the user or 'me' if logged in
/// @param token The invite token (optional)
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
-(NSNumber*) connectUsingTokenUsingPOSTWithUserId: (NSString*) userId
    token: (NSString*) token
    completionHandler: (void (^)(NSError* error)) handler;

/// Get friends list
///
/// @param userId The id of the user or 'me'
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPageResourceSimpleUserResource_*
-(NSNumber*) getFriendsUsingGETWithUserId: (NSString*) userId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceSimpleUserResource_* output, NSError* error)) handler;

/// Returns the invite token
/// This is a unique invite token that allows direct connection to the request user.  Exposing that token presents privacy issues if the token is leaked. Use friend request flow instead if confirmation is required
///
/// @param userId The id of the user or 'me' if logged in
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return NSString*
-(NSNumber*) getInviteTokenUsingGETWithUserId: (NSString*) userId
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;

/// Get pending invites
/// Invites that the specified user received
///
/// @param userId The id of the user or 'me'
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPageResourceSimpleUserResource_*
-(NSNumber*) getInvitesUsingGETWithUserId: (NSString*) userId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceSimpleUserResource_* output, NSError* error)) handler;

/// Remove or decline a friend
///
/// @param userId The id of the user or 'me' if logged in
/// @param _id The id of the user to befriend
///  code:200 message:"OK",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
-(NSNumber*) removeFriendUsingDELETEWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


@end