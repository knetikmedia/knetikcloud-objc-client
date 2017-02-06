#import <Foundation/Foundation.h>
#import "SWGPaymentAuthorizationResource.h"
#import "SWGPaymentMethodResource.h"
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



@interface SWGPaymentsApi: NSObject <SWGApi>

extern NSString* kSWGPaymentsApiErrorDomain;
extern NSInteger kSWGPaymentsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a new payment method for a user
/// 
///
/// @param userId ID of the user for whom the payment method is being created
/// @param paymentMethod Payment method being created (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPaymentMethodResource*
-(NSURLSessionTask*) createPaymentMethodWithUserId: (NSNumber*) userId
    paymentMethod: (SWGPaymentMethodResource*) paymentMethod
    completionHandler: (void (^)(SWGPaymentMethodResource* output, NSError* error)) handler;


/// Delete an existing payment method for a user
/// 
///
/// @param userId ID of the user for whom the payment method is being updated
/// @param _id ID of the payment method being deleted
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSURLSessionTask*) deletePaymentMethodWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single payment method for a user
/// 
///
/// @param userId ID of the user for whom the payment method is being retrieved
/// @param _id ID of the payment method being retrieved
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPaymentMethodResource*
-(NSURLSessionTask*) getPaymentMethodWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
    completionHandler: (void (^)(SWGPaymentMethodResource* output, NSError* error)) handler;


/// Get all payment methods for a user
/// 
///
/// @param userId ID of the user for whom the payment methods are being retrieved
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<SWGPaymentMethodResource>*
-(NSURLSessionTask*) getPaymentMethodsWithUserId: (NSNumber*) userId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(NSArray<SWGPaymentMethodResource>* output, NSError* error)) handler;


/// Authorize payment of an invoice for later capture
/// 
///
/// @param request Payment authorization request (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPaymentAuthorizationResource*
-(NSURLSessionTask*) paymentAuthorizationWithRequest: (SWGPaymentAuthorizationResource*) request
    completionHandler: (void (^)(SWGPaymentAuthorizationResource* output, NSError* error)) handler;


/// Capture an existing invoice payment authorization
/// 
///
/// @param _id ID of the payment authorization to capture
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) paymentCaptureWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Update an existing payment method for a user
/// 
///
/// @param userId ID of the user for whom the payment method is being updated
/// @param _id ID of the payment method being updated
/// @param paymentMethod The updated payment method data (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) updatePaymentMethodWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
    paymentMethod: (SWGPaymentMethodResource*) paymentMethod
    completionHandler: (void (^)(NSError* error)) handler;



@end