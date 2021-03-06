#import <Foundation/Foundation.h>
#import "JSAPIPageResourceTopicResource_.h"
#import "JSAPIResult.h"
#import "JSAPITopicSubscriberResource.h"
#import "JSAPIValueWrapperBoolean_.h"
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



@interface JSAPIMessagingTopicsApi: NSObject <JSAPIApi>

extern NSString* kJSAPIMessagingTopicsApiErrorDomain;
extern NSInteger kJSAPIMessagingTopicsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Enable or disable messages for a user
/// Useful for opt-out options on a single topic. Consider multiple topics for multiple opt-out options. <br><br><b>Permissions Needed:</b> TOPICS_ADMIN or self
///
/// @param _id The id of the topic
/// @param userId The id of the subscriber or &#39;me&#39;
/// @param disabled disabled
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) disableTopicSubscriberWithId: (NSString*) _id
    userId: (NSString*) userId
    disabled: (JSAPIValueWrapperBoolean_*) disabled
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a subscriber to a topic
/// <b>Permissions Needed:</b> TOPICS_ADMIN or self
///
/// @param _id The id of the topic
/// @param userId The id of the subscriber or &#39;me&#39;
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPITopicSubscriberResource*
-(NSURLSessionTask*) getTopicSubscriberWithId: (NSString*) _id
    userId: (NSString*) userId
    completionHandler: (void (^)(JSAPITopicSubscriberResource* output, NSError* error)) handler;


/// Get all messaging topics for a given user
/// <b>Permissions Needed:</b> TOPICS_ADMIN or self
///
/// @param _id The id of the user or &#39;me&#39;
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceTopicResource_*
-(NSURLSessionTask*) getUserTopicsWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPIPageResourceTopicResource_* output, NSError* error)) handler;



@end
