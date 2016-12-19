#import <Foundation/Foundation.h>
#import "SWGCountryTaxResource.h"
#import "SWGPageCountryTaxResource_.h"
#import "SWGPageStateTaxResource_.h"
#import "SWGStateTaxResource.h"
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



@interface SWGTaxesApi: NSObject <SWGApi>

extern NSString* kSWGTaxesApiErrorDomain;
extern NSInteger kSWGTaxesApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Create a tax
/// 
///
/// @param countryCodeIso3 The iso3 code of the country
/// @param taxResource The tax object (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) createTaxUsingPOSTWithCountryCodeIso3: (NSString*) countryCodeIso3
    taxResource: (SWGStateTaxResource*) taxResource
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete an existing tax
/// 
///
/// @param countryCodeIso3 The iso3 code of the country
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSNumber*) deleteTaxUsingDELETEWithCountryCodeIso3: (NSString*) countryCodeIso3
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete an existing tax
/// 
///
/// @param countryCodeIso3 The iso3 code of the country
/// @param stateCode The code of the state
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSNumber*) deleteTaxUsingDELETE1WithCountryCodeIso3: (NSString*) countryCodeIso3
    stateCode: (NSString*) stateCode
    completionHandler: (void (^)(NSError* error)) handler;


/// List and search taxes across all countries
/// Get a list of taxes
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageStateTaxResource_*
-(NSNumber*) getAllTaxesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageStateTaxResource_* output, NSError* error)) handler;


/// Get a single tax
/// 
///
/// @param countryCodeIso3 The iso3 code of the country
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGCountryTaxResource*
-(NSNumber*) getTaxUsingGETWithCountryCodeIso3: (NSString*) countryCodeIso3
    completionHandler: (void (^)(SWGCountryTaxResource* output, NSError* error)) handler;


/// Get a single tax
/// 
///
/// @param countryCodeIso3 The iso3 code of the country
/// @param stateCode The code of the state
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGStateTaxResource*
-(NSNumber*) getTaxUsingGET1WithCountryCodeIso3: (NSString*) countryCodeIso3
    stateCode: (NSString*) stateCode
    completionHandler: (void (^)(SWGStateTaxResource* output, NSError* error)) handler;


/// List and search taxes
/// Get a list of taxes
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageCountryTaxResource_*
-(NSNumber*) getTaxesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageCountryTaxResource_* output, NSError* error)) handler;


/// List and search taxes within a country
/// Get a list of taxes
///
/// @param countryCodeIso3 The iso3 code of the country
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageStateTaxResource_*
-(NSNumber*) getTaxesUsingGET1WithCountryCodeIso3: (NSString*) countryCodeIso3
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageStateTaxResource_* output, NSError* error)) handler;


/// Create a tax
/// 
///
/// @param taxResource The tax object (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) updateTaxUsingPOSTWithTaxResource: (SWGCountryTaxResource*) taxResource
    completionHandler: (void (^)(NSError* error)) handler;


/// Create or update a tax
/// 
///
/// @param countryCodeIso3 The iso3 code of the country
/// @param taxResource The tax object (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) updateTaxUsingPUTWithCountryCodeIso3: (NSString*) countryCodeIso3
    taxResource: (SWGCountryTaxResource*) taxResource
    completionHandler: (void (^)(NSError* error)) handler;


/// Create or update a tax
/// 
///
/// @param countryCodeIso3 The iso3 code of the country
/// @param stateCode The code of the state
/// @param taxResource The tax object (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) updateTaxUsingPUT1WithCountryCodeIso3: (NSString*) countryCodeIso3
    stateCode: (NSString*) stateCode
    taxResource: (SWGStateTaxResource*) taxResource
    completionHandler: (void (^)(NSError* error)) handler;



@end
