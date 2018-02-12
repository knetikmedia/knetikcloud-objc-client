#import <Foundation/Foundation.h>
#import "JSAPINotificationResource.h"
#import "JSAPINotificationTypeResource.h"
#import "JSAPINotificationUserTypeResource.h"
#import "JSAPIPageResourceNotificationTypeResource_.h"
#import "JSAPIPageResourceNotificationUserTypeResource_.h"
#import "JSAPIPageResourceUserNotificationResource_.h"
#import "JSAPIResult.h"
#import "JSAPIValueWrapperBoolean_.h"
#import "JSAPIValueWrapperString_.h"
#import "JSAPIApi.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface JSAPINotificationsApi: NSObject <JSAPIApi>

extern NSString* kJSAPINotificationsApiErrorDomain;
extern NSInteger kJSAPINotificationsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a notification type
/// 
///
/// @param notificationType notificationType (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPINotificationTypeResource*
-(NSURLSessionTask*) createNotificationTypeWithNotificationType: (JSAPINotificationTypeResource*) notificationType
    completionHandler: (void (^)(JSAPINotificationTypeResource* output, NSError* error)) handler;


/// Delete a notification type
/// 
///
/// @param _id id
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteNotificationTypeWithId: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single notification type
/// 
///
/// @param _id id
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPINotificationTypeResource*
-(NSURLSessionTask*) getNotificationTypeWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPINotificationTypeResource* output, NSError* error)) handler;


/// List and search notification types
/// Get a list of notification type with optional filtering
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceNotificationTypeResource_*
-(NSURLSessionTask*) getNotificationTypesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceNotificationTypeResource_* output, NSError* error)) handler;


/// View a user's notification settings for a type
/// 
///
/// @param typeId The id of the topic
/// @param userId The id of the subscriber or &#39;me&#39;
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPINotificationUserTypeResource*
-(NSURLSessionTask*) getUserNotificationInfoWithTypeId: (NSString*) typeId
    userId: (NSString*) userId
    completionHandler: (void (^)(JSAPINotificationUserTypeResource* output, NSError* error)) handler;


/// View a user's notification settings
/// 
///
/// @param userId The id of the subscriber or &#39;me&#39;
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceNotificationUserTypeResource_*
-(NSURLSessionTask*) getUserNotificationInfoListWithUserId: (NSString*) userId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceNotificationUserTypeResource_* output, NSError* error)) handler;


/// Get notifications
/// 
///
/// @param _id The id of the user or &#39;me&#39;
/// @param filterStatus filter for notifications with a given status (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceUserNotificationResource_*
-(NSURLSessionTask*) getUserNotificationsWithId: (NSString*) _id
    filterStatus: (NSString*) filterStatus
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceUserNotificationResource_* output, NSError* error)) handler;


/// Send a notification
/// 
///
/// @param notification notification (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPINotificationResource*
-(NSURLSessionTask*) sendNotificationWithNotification: (JSAPINotificationResource*) notification
    completionHandler: (void (^)(JSAPINotificationResource* output, NSError* error)) handler;


/// Set notification status
/// 
///
/// @param userId The id of the user or &#39;me&#39;
/// @param notificationId The id of the notification
/// @param notification status (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) setUserNotificationStatusWithUserId: (NSString*) userId
    notificationId: (NSString*) notificationId
    notification: (JSAPIValueWrapperString_*) notification
    completionHandler: (void (^)(NSError* error)) handler;


/// Enable or disable direct notifications for a user
/// Allows enabling or disabling messages for a given notification type when sent direct to the user. Notifications can still be retrieved by endpoint. For notifications broadcased to a topic, see the topic service to disable messages for the user there.
///
/// @param typeId The id of the topic
/// @param userId The id of the subscriber or &#39;me&#39;
/// @param silenced silenced
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) silenceDirectNotificationsWithTypeId: (NSString*) typeId
    userId: (NSString*) userId
    silenced: (JSAPIValueWrapperBoolean_*) silenced
    completionHandler: (void (^)(NSError* error)) handler;


/// Update a notificationType
/// 
///
/// @param _id id
/// @param notificationType notificationType (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPINotificationTypeResource*
-(NSURLSessionTask*) updateNotificationTypeWithId: (NSString*) _id
    notificationType: (JSAPINotificationTypeResource*) notificationType
    completionHandler: (void (^)(JSAPINotificationTypeResource* output, NSError* error)) handler;



@end
