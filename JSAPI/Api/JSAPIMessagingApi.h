#import <Foundation/Foundation.h>
#import "JSAPIMessageResource.h"
#import "JSAPIMessageTemplateBulkRequest.h"
#import "JSAPIMessageTemplateResource.h"
#import "JSAPIPageResourceMessageTemplateResource_.h"
#import "JSAPIRawEmailResource.h"
#import "JSAPIRawPushResource.h"
#import "JSAPIRawSMSResource.h"
#import "JSAPIResult.h"
#import "JSAPITemplateEmailResource.h"
#import "JSAPITemplatePushResource.h"
#import "JSAPITemplateSMSResource.h"
#import "JSAPIWebsocketMessageResource.h"
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

/// Compile a message template
/// Processes a set of input data against the template and returnes the compiled result. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
///
/// @param request request (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSDictionary<NSString*, NSString*>*
-(NSURLSessionTask*) compileMessageTemplateWithRequest: (JSAPIMessageTemplateBulkRequest*) request
    completionHandler: (void (^)(NSDictionary<NSString*, NSString*>* output, NSError* error)) handler;


/// Create a message template
/// <b>Permissions Needed:</b> MESSAGING_ADMIN
///
/// @param messageTemplate The new template email to be sent (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIMessageTemplateResource*
-(NSURLSessionTask*) createMessageTemplateWithMessageTemplate: (JSAPIMessageTemplateResource*) messageTemplate
    completionHandler: (void (^)(JSAPIMessageTemplateResource* output, NSError* error)) handler;


/// Delete an existing message template
/// <b>Permissions Needed:</b> ARTICLES_ADMIN
///
/// @param _id The message_template id
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteMessageTemplateWithId: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single message template
/// <b>Permissions Needed:</b> ARTICLES_ADMIN
///
/// @param _id The message_template id
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIMessageTemplateResource*
-(NSURLSessionTask*) getMessageTemplateWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPIMessageTemplateResource* output, NSError* error)) handler;


/// List and search message templates
/// Get a list of message templates with optional filtering. <br><br><b>Permissions Needed:</b> ARTICLES_ADMIN
///
/// @param filterTagset Filter for message templates with at least one of a specified set of tags (separated by comma) (optional)
/// @param filterTagIntersection Filter for message templates with all of a specified set of tags (separated by comma) (optional)
/// @param filterTagExclusion Filter for message templates with none of a specified set of tags (separated by comma) (optional)
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
/// @return JSAPIPageResourceMessageTemplateResource_*
-(NSURLSessionTask*) getMessageTemplatesWithFilterTagset: (NSString*) filterTagset
    filterTagIntersection: (NSString*) filterTagIntersection
    filterTagExclusion: (NSString*) filterTagExclusion
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceMessageTemplateResource_* output, NSError* error)) handler;


/// Send a message
/// Sends a message with one or more formats to one or more users. Fill in any message formats desired (email, sms, websockets) and each user will recieve all valid formats. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
///
/// @param messageResource The message to be sent (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) sendMessage1WithMessageResource: (JSAPIMessageResource*) messageResource
    completionHandler: (void (^)(NSError* error)) handler;


/// Send a raw email to one or more users
/// <b>Permissions Needed:</b> MESSAGING_ADMIN
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
/// Sends a raw push notification message to one or more users. User's without registered mobile device for the application will be skipped. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
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
/// Sends a raw SMS text message to one or more users. User's without registered mobile numbers will be skipped. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
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
/// <b>Permissions Needed:</b> MESSAGING_ADMIN
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
/// Sends a templated push notification message to one or more users. User's without registered mobile device for the application will be skipped. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
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
/// Sends a templated SMS text message to one or more users. User's without registered mobile numbers will be skipped. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
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


/// Send a websocket message
/// Sends a websocket message to one or more users. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
///
/// @param websocketResource The new websocket message to be sent (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) sendWebsocketWithWebsocketResource: (JSAPIWebsocketMessageResource*) websocketResource
    completionHandler: (void (^)(NSError* error)) handler;


/// Update an existing message template
/// <b>Permissions Needed:</b> ARTICLES_ADMIN
///
/// @param _id The message_template id
/// @param messageTemplateResource The message template (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIMessageTemplateResource*
-(NSURLSessionTask*) updateMessageTemplateWithId: (NSString*) _id
    messageTemplateResource: (JSAPIMessageTemplateResource*) messageTemplateResource
    completionHandler: (void (^)(JSAPIMessageTemplateResource* output, NSError* error)) handler;



@end
