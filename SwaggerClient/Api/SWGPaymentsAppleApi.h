#import <Foundation/Foundation.h>
#import "SWGApplyPaymentRequest.h"
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



@interface SWGPaymentsAppleApi: NSObject <SWGApi>

extern NSString* kSWGPaymentsAppleApiErrorDomain;
extern NSInteger kSWGPaymentsAppleApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Pay invoice with Apple receipt
/// Mark an invoice paid using Apple payment receipt. A receipt will only be accepted once and the details of the transaction must match the invoice, including the product_id matching the sku text of the item in the invoice. Returns the transaction ID if successful.
///
/// @param request The request for paying an invoice through an Apple receipt (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSString*
-(NSNumber*) verifyReceiptUsingPOSTWithRequest: (SWGApplyPaymentRequest*) request
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;



@end
