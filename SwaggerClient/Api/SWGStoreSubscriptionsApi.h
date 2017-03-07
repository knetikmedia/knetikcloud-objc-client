#import <Foundation/Foundation.h>
#import "SWGPageResourceSubscriptionResource_.h"
#import "SWGPageResourceSubscriptionTemplateResource_.h"
#import "SWGResult.h"
#import "SWGSubscriptionResource.h"
#import "SWGSubscriptionTemplateResource.h"
#import "SWGApi.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGStoreSubscriptionsApi: NSObject <SWGApi>

extern NSString* kSWGStoreSubscriptionsApiErrorDomain;
extern NSInteger kSWGStoreSubscriptionsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Creates a subscription item and associated plans
/// 
///
/// @param subscriptionResource The subscription to be created (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGSubscriptionResource*
-(NSURLSessionTask*) createSubscriptionWithSubscriptionResource: (SWGSubscriptionResource*) subscriptionResource
    completionHandler: (void (^)(SWGSubscriptionResource* output, NSError* error)) handler;


/// Create a subscription template
/// Subscription Templates define a type of subscription and the properties they have.
///
/// @param subscriptionTemplateResource The new subscription template (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGSubscriptionTemplateResource*
-(NSURLSessionTask*) createSubscriptionTemplateWithSubscriptionTemplateResource: (SWGSubscriptionTemplateResource*) subscriptionTemplateResource
    completionHandler: (void (^)(SWGSubscriptionTemplateResource* output, NSError* error)) handler;


/// Delete a subscription plan
/// Must not be locked or a migration target
///
/// @param _id The id of the subscription
/// @param planId The id of the plan
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) deleteSubscriptionWithId: (NSNumber*) _id
    planId: (NSString*) planId
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete a subscription template
/// 
///
/// @param _id The id of the template
/// @param cascade force deleting the template if it&#39;s attached to other objects, cascade &#x3D; detach (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) deleteSubscriptionTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;


/// Retrieve a single subscription item and associated plans
/// 
///
/// @param _id The id of the subscription
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGSubscriptionResource*
-(NSURLSessionTask*) getSubscriptionWithId: (NSNumber*) _id
    completionHandler: (void (^)(SWGSubscriptionResource* output, NSError* error)) handler;


/// Get a single subscription template
/// Subscription Templates define a type of subscription and the properties they have.
///
/// @param _id The id of the template
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGSubscriptionTemplateResource*
-(NSURLSessionTask*) getSubscriptionTemplateWithId: (NSString*) _id
    completionHandler: (void (^)(SWGSubscriptionTemplateResource* output, NSError* error)) handler;


/// List and search subscription templates
/// 
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
/// @return SWGPageResourceSubscriptionTemplateResource_*
-(NSURLSessionTask*) getSubscriptionTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceSubscriptionTemplateResource_* output, NSError* error)) handler;


/// List available subscription items and associated plans
/// 
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
/// @return SWGPageResourceSubscriptionResource_*
-(NSURLSessionTask*) getSubscriptionsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceSubscriptionResource_* output, NSError* error)) handler;


/// Processes subscriptions and charge dues
/// 
///
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) processSubscriptionsWithCompletionHandler: 
    (void (^)(NSError* error)) handler;


/// Updates a subscription item and associated plans
/// Will not remove plans left out
///
/// @param _id The id of the subscription
/// @param subscriptionResource The subscription resource object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) updateSubscriptionWithId: (NSNumber*) _id
    subscriptionResource: (SWGSubscriptionResource*) subscriptionResource
    completionHandler: (void (^)(NSError* error)) handler;


/// Update a subscription template
/// 
///
/// @param _id The id of the template
/// @param subscriptionTemplateResource The subscription template resource object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGSubscriptionTemplateResource*
-(NSURLSessionTask*) updateSubscriptionTemplateWithId: (NSString*) _id
    subscriptionTemplateResource: (SWGSubscriptionTemplateResource*) subscriptionTemplateResource
    completionHandler: (void (^)(SWGSubscriptionTemplateResource* output, NSError* error)) handler;



@end
