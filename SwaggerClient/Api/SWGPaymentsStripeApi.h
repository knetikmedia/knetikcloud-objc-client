#import <Foundation/Foundation.h>
#import "SWGPaymentMethodResource.h"
#import "SWGStripeCreatePaymentMethod.h"
#import "SWGStripePaymentRequest.h"
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



@interface SWGPaymentsStripeApi: NSObject <SWGApi>

extern NSString* kSWGPaymentsStripeApiErrorDomain;
extern NSInteger kSWGPaymentsStripeApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Create a Stripe payment method for a user
/// Stores customer information and creates a payment method that can be used to pay invoices through the payments endpoints.
///
/// @param request The request to create a Stripe customer with payment info (optional)
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPaymentMethodResource*
-(NSNumber*) createCustomerUsingPOST1WithRequest: (SWGStripeCreatePaymentMethod*) request
    completionHandler: (void (^)(SWGPaymentMethodResource* output, NSError* error)) handler;

/// Pay with a single use token
///
/// @param request The request to pay an invoice (optional)
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
-(NSNumber*) payInvoiceUsingPOST1WithRequest: (SWGStripePaymentRequest*) request
    completionHandler: (void (^)(NSError* error)) handler;


@end
