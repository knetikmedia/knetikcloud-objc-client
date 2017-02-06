#import <Foundation/Foundation.h>
#import "SWGCurrencyResource.h"
#import "SWGPageResourceCurrencyResource_.h"
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



@interface SWGCurrenciesApi: NSObject <SWGApi>

extern NSString* kSWGCurrenciesApiErrorDomain;
extern NSInteger kSWGCurrenciesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a currency
/// 
///
/// @param currency The currency object (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGCurrencyResource*
-(NSURLSessionTask*) createCurrencyWithCurrency: (SWGCurrencyResource*) currency
    completionHandler: (void (^)(SWGCurrencyResource* output, NSError* error)) handler;


/// Delete a currency
/// 
///
/// @param code The currency code
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSURLSessionTask*) deleteCurrencyWithCode: (NSString*) code
    completionHandler: (void (^)(NSError* error)) handler;


/// List and search currencies
/// 
///
/// @param filterEnabledCurrencies Filter for alternate currencies setup explicitely in system config (optional)
/// @param filterType Filter currencies by type.  Allowable values: (&#39;virtual&#39;, &#39;real&#39;) (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to name:ASC)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageResourceCurrencyResource_*
-(NSURLSessionTask*) getCurrenciesWithFilterEnabledCurrencies: (NSNumber*) filterEnabledCurrencies
    filterType: (NSString*) filterType
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceCurrencyResource_* output, NSError* error)) handler;


/// Get a single currency
/// 
///
/// @param code The currency code
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGCurrencyResource*
-(NSURLSessionTask*) getCurrencyWithCode: (NSString*) code
    completionHandler: (void (^)(SWGCurrencyResource* output, NSError* error)) handler;


/// Update a currency
/// 
///
/// @param code The currency code
/// @param currency The currency object (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) updateCurrencyWithCode: (NSString*) code
    currency: (SWGCurrencyResource*) currency
    completionHandler: (void (^)(NSError* error)) handler;



@end
