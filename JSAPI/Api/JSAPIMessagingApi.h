#import <Foundation/Foundation.h>
#import "JSAPIRawEmailResource.h"
#import "JSAPIRawPushResource.h"
#import "JSAPIRawSMSResource.h"
#import "JSAPIResult.h"
#import "JSAPITemplateEmailResource.h"
#import "JSAPITemplatePushResource.h"
#import "JSAPITemplateSMSResource.h"
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



@interface JSAPIMessagingApi: NSObject <JSAPIApi>

extern NSString* kJSAPIMessagingApiErrorDomain;
extern NSInteger kJSAPIMessagingApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Send a raw email to one or more users
/// 
///
/// @param rawEmailResource The new raw email to be sent (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) sendRawEmailWithRawEmailResource: (JSAPIRawEmailResource*) rawEmailResource
    completionHandler: (void (^)(NSError* error)) handler;


/// Send a raw push notification
/// Sends a raw push notification message to one or more users. User's without registered mobile device for the application will be skipped.
///
/// @param rawPushResource The new raw push notification to be sent (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) sendRawPushWithRawPushResource: (JSAPIRawPushResource*) rawPushResource
    completionHandler: (void (^)(NSError* error)) handler;


/// Send a raw SMS
/// Sends a raw SMS text message to one or more users. User's without registered mobile numbers will be skipped.
///
/// @param rawSMSResource The new raw SMS to be sent (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) sendRawSMSWithRawSMSResource: (JSAPIRawSMSResource*) rawSMSResource
    completionHandler: (void (^)(NSError* error)) handler;


/// Send a templated email to one or more users
/// 
///
/// @param messageResource The new template email to be sent (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) sendTemplatedEmailWithMessageResource: (JSAPITemplateEmailResource*) messageResource
    completionHandler: (void (^)(NSError* error)) handler;


/// Send a templated push notification
/// Sends a templated push notification message to one or more users. User's without registered mobile device for the application will be skipped.
///
/// @param templatePushResource The new templated push notification to be sent (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) sendTemplatedPushWithTemplatePushResource: (JSAPITemplatePushResource*) templatePushResource
    completionHandler: (void (^)(NSError* error)) handler;


/// Send a new templated SMS
/// Sends a templated SMS text message to one or more users. User's without registered mobile numbers will be skipped.
///
/// @param templateSMSResource The new template SMS to be sent (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) sendTemplatedSMSWithTemplateSMSResource: (JSAPITemplateSMSResource*) templateSMSResource
    completionHandler: (void (^)(NSError* error)) handler;



@end
