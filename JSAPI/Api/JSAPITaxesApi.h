#import <Foundation/Foundation.h>
#import "JSAPICountryTaxResource.h"
#import "JSAPIPageResourceCountryTaxResource_.h"
#import "JSAPIPageResourceStateTaxResource_.h"
#import "JSAPIResult.h"
#import "JSAPIStateTaxResource.h"
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



@interface JSAPITaxesApi: NSObject <JSAPIApi>

extern NSString* kJSAPITaxesApiErrorDomain;
extern NSInteger kJSAPITaxesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a country tax
/// <b>Permissions Needed:</b> TAX_ADMIN
///
/// @param taxResource The tax object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPICountryTaxResource*
-(NSURLSessionTask*) createCountryTaxWithTaxResource: (JSAPICountryTaxResource*) taxResource
    completionHandler: (void (^)(JSAPICountryTaxResource* output, NSError* error)) handler;


/// Create a state tax
/// <b>Permissions Needed:</b> TAX_ADMIN
///
/// @param countryCodeIso3 The iso3 code of the country
/// @param taxResource The tax object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIStateTaxResource*
-(NSURLSessionTask*) createStateTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    taxResource: (JSAPIStateTaxResource*) taxResource
    completionHandler: (void (^)(JSAPIStateTaxResource* output, NSError* error)) handler;


/// Delete an existing tax
/// <b>Permissions Needed:</b> TAX_ADMIN
///
/// @param countryCodeIso3 The iso3 code of the country
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteCountryTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete an existing state tax
/// <b>Permissions Needed:</b> TAX_ADMIN
///
/// @param countryCodeIso3 The iso3 code of the country
/// @param stateCode The code of the state
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteStateTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    stateCode: (NSString*) stateCode
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single tax
/// <b>Permissions Needed:</b> ANY
///
/// @param countryCodeIso3 The iso3 code of the country
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPICountryTaxResource*
-(NSURLSessionTask*) getCountryTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    completionHandler: (void (^)(JSAPICountryTaxResource* output, NSError* error)) handler;


/// List and search taxes
/// <b>Permissions Needed:</b> TAX_ADMIN
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to name:ASC)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceCountryTaxResource_*
-(NSURLSessionTask*) getCountryTaxesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceCountryTaxResource_* output, NSError* error)) handler;


/// Get a single state tax
/// <b>Permissions Needed:</b> ANY
///
/// @param countryCodeIso3 The iso3 code of the country
/// @param stateCode The code of the state
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIStateTaxResource*
-(NSURLSessionTask*) getStateTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    stateCode: (NSString*) stateCode
    completionHandler: (void (^)(JSAPIStateTaxResource* output, NSError* error)) handler;


/// List and search taxes across all countries
/// <b>Permissions Needed:</b> ANY
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceStateTaxResource_*
-(NSURLSessionTask*) getStateTaxesForCountriesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceStateTaxResource_* output, NSError* error)) handler;


/// List and search taxes within a country
/// <b>Permissions Needed:</b> ANY
///
/// @param countryCodeIso3 The iso3 code of the country
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceStateTaxResource_*
-(NSURLSessionTask*) getStateTaxesForCountryWithCountryCodeIso3: (NSString*) countryCodeIso3
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceStateTaxResource_* output, NSError* error)) handler;


/// Create or update a tax
/// <b>Permissions Needed:</b> TAX_ADMIN
///
/// @param countryCodeIso3 The iso3 code of the country
/// @param taxResource The tax object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPICountryTaxResource*
-(NSURLSessionTask*) updateCountryTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    taxResource: (JSAPICountryTaxResource*) taxResource
    completionHandler: (void (^)(JSAPICountryTaxResource* output, NSError* error)) handler;


/// Create or update a state tax
/// <b>Permissions Needed:</b> TAX_ADMIN
///
/// @param countryCodeIso3 The iso3 code of the country
/// @param stateCode The code of the state
/// @param taxResource The tax object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIStateTaxResource*
-(NSURLSessionTask*) updateStateTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    stateCode: (NSString*) stateCode
    taxResource: (JSAPIStateTaxResource*) taxResource
    completionHandler: (void (^)(JSAPIStateTaxResource* output, NSError* error)) handler;



@end
