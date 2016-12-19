#import <Foundation/Foundation.h>
#import "SWGRawEmailResource.h"
#import "SWGRawSMSResource.h"
#import "SWGTemplateEmailResource.h"
#import "SWGTemplateSMSResource.h"
#import "SWGApi.h"

/**
* Knetik Platform API Documentation Latest
* No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGMessagingApi: NSObject <SWGApi>

extern NSString* kSWGMessagingApiErrorDomain;
extern NSInteger kSWGMessagingApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Send a raw email to one or more users
/// 
///
/// @param rawEmailResource The new raw email to be sent (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) sendRawEmailUsingPOSTWithRawEmailResource: (SWGRawEmailResource*) rawEmailResource
    completionHandler: (void (^)(NSError* error)) handler;


/// Send a raw SMS
/// Sends a raw SMS text message to one or more users. User's without registered mobile numbers will be skipped.
///
/// @param rawSMSResource The new raw SMS to be sent (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) sendRawSMSUsingPOSTWithRawSMSResource: (SWGRawSMSResource*) rawSMSResource
    completionHandler: (void (^)(NSError* error)) handler;


/// Send a new templated SMS
/// Sends a templated SMS text message to one or more users. User's without registered mobile numbers will be skipped.
///
/// @param templateSMSResource The new template SMS to be sent (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) sendRawSMSUsingPOST1WithTemplateSMSResource: (SWGTemplateSMSResource*) templateSMSResource
    completionHandler: (void (^)(NSError* error)) handler;


/// Send a templated email to one or more users
/// 
///
/// @param messageResource The new template email to be sent (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) sendTemplateEmailUsingPOSTWithMessageResource: (SWGTemplateEmailResource*) messageResource
    completionHandler: (void (^)(NSError* error)) handler;



@end
