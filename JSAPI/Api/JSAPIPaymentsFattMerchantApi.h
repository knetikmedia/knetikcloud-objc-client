#import <Foundation/Foundation.h>
#import "JSAPIFattMerchantPaymentMethodRequest.h"
#import "JSAPIPaymentMethodResource.h"
#import "JSAPIResult.h"
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



@interface JSAPIPaymentsFattMerchantApi: NSObject <JSAPIApi>

extern NSString* kJSAPIPaymentsFattMerchantApiErrorDomain;
extern NSInteger kJSAPIPaymentsFattMerchantApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create or update a FattMerchant payment method for a user
/// Stores customer information and creates a payment method that can be used to pay invoices through the payments endpoints. <br><br><b>Permissions Needed:</b> FATTMERCHANT_ADMIN or owner
///
/// @param request Request containing payment method information for user (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPaymentMethodResource*
-(NSURLSessionTask*) createOrUpdateFattMerchantPaymentMethodWithRequest: (JSAPIFattMerchantPaymentMethodRequest*) request
    completionHandler: (void (^)(JSAPIPaymentMethodResource* output, NSError* error)) handler;



@end
