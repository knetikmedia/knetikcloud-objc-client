#import <Foundation/Foundation.h>
#import "JSAPIInventorySubscriptionResource.h"
#import "JSAPIInvoiceResource.h"
#import "JSAPIReactivateSubscriptionRequest.h"
#import "JSAPIResult.h"
#import "JSAPISubscriptionPriceOverrideRequest.h"
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



@interface JSAPIUsersSubscriptionsApi: NSObject <JSAPIApi>

extern NSString* kJSAPIUsersSubscriptionsApiErrorDomain;
extern NSInteger kJSAPIUsersSubscriptionsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get details about a user's subscription
/// 
///
/// @param userId The id of the user
/// @param inventoryId The id of the user&#39;s inventory
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIInventorySubscriptionResource*
-(NSURLSessionTask*) getUserSubscriptionDetailsWithUserId: (NSNumber*) userId
    inventoryId: (NSNumber*) inventoryId
    completionHandler: (void (^)(JSAPIInventorySubscriptionResource* output, NSError* error)) handler;


/// Get details about a user's subscriptions
/// 
///
/// @param userId The id of the user
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<JSAPIInventorySubscriptionResource>*
-(NSURLSessionTask*) getUsersSubscriptionDetailsWithUserId: (NSNumber*) userId
    completionHandler: (void (^)(NSArray<JSAPIInventorySubscriptionResource>* output, NSError* error)) handler;


/// Reactivate a subscription and charge fee
/// 
///
/// @param userId The id of the user
/// @param inventoryId The id of the user&#39;s inventory
/// @param reactivateSubscriptionRequest The reactivate subscription request object inventory (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIInvoiceResource*
-(NSURLSessionTask*) reactivateUserSubscriptionWithUserId: (NSNumber*) userId
    inventoryId: (NSNumber*) inventoryId
    reactivateSubscriptionRequest: (JSAPIReactivateSubscriptionRequest*) reactivateSubscriptionRequest
    completionHandler: (void (^)(JSAPIInvoiceResource* output, NSError* error)) handler;


/// Set a new date to bill a subscription on
/// 
///
/// @param userId The id of the user
/// @param inventoryId The id of the user&#39;s inventory
/// @param billDate The new bill date. Unix timestamp in seconds
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) setSubscriptionBillDateWithUserId: (NSNumber*) userId
    inventoryId: (NSNumber*) inventoryId
    billDate: (NSNumber*) billDate
    completionHandler: (void (^)(NSError* error)) handler;


/// Set the payment method to use for a subscription
/// May send null to use floating default
///
/// @param userId The id of the user
/// @param inventoryId The id of the user&#39;s inventory
/// @param paymentMethodId The id of the payment method (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) setSubscriptionPaymentMethodWithUserId: (NSNumber*) userId
    inventoryId: (NSNumber*) inventoryId
    paymentMethodId: (NSNumber*) paymentMethodId
    completionHandler: (void (^)(NSError* error)) handler;


/// Set the status of a subscription
/// The body is a json string (put in quotes) that should match a desired invoice status type. Note that the new status may be blocked if the system is not configured to allow the current status to be changed to the new, to enforce proper flow. The default options for statuses are shown below but may be altered for special use cases
///
/// @param userId The id of the user
/// @param inventoryId The id of the user&#39;s inventory
/// @param status The new status for the subscription. Actual options may differ from the indicated set if the invoice status type data has been altered.  Allowable values: (&#39;current&#39;, &#39;canceled&#39;, &#39;stopped&#39;, &#39;payment_failed&#39;, &#39;suspended&#39;)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) setSubscriptionStatusWithUserId: (NSNumber*) userId
    inventoryId: (NSNumber*) inventoryId
    status: (NSString*) status
    completionHandler: (void (^)(NSError* error)) handler;


/// Set a new subscription plan for a user
/// 
///
/// @param userId The id of the user
/// @param inventoryId The id of the user&#39;s inventory
/// @param planId The id of the new plan. Must be from the same subscription (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) setUserSubscriptionPlanWithUserId: (NSNumber*) userId
    inventoryId: (NSNumber*) inventoryId
    planId: (NSString*) planId
    completionHandler: (void (^)(NSError* error)) handler;


/// Set a new subscription price for a user
/// This new price will be what the user is charged at the begining of each new period. This override is specific to the current subscription and will not carry over if they end and later re-subscribe. It will persist if the plan is changed using the setUserSubscriptionPlan endpoint.
///
/// @param userId The id of the user
/// @param inventoryId The id of the user&#39;s inventory
/// @param theOverrideDetails override (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) setUserSubscriptionPriceWithUserId: (NSNumber*) userId
    inventoryId: (NSNumber*) inventoryId
    theOverrideDetails: (JSAPISubscriptionPriceOverrideRequest*) theOverrideDetails
    completionHandler: (void (^)(NSError* error)) handler;



@end
