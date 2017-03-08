#import <Foundation/Foundation.h>
#import "SWGCountryResource.h"
#import "SWGCurrencyResource.h"
#import "SWGResult.h"
#import "SWGStateResource.h"
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



@interface SWGLocationsApi: NSObject <SWGApi>

extern NSString* kSWGLocationsApiErrorDomain;
extern NSInteger kSWGLocationsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get a list of countries
/// 
///
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<SWGCountryResource>*
-(NSURLSessionTask*) getCountriesWithCompletionHandler: 
    (void (^)(NSArray<SWGCountryResource>* output, NSError* error)) handler;


/// Get the iso3 code of your country
/// Determined by geo ip location
///
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSString*
-(NSURLSessionTask*) getCountryByGeoLocationWithCompletionHandler: 
    (void (^)(NSString* output, NSError* error)) handler;


/// Get a list of a country's states
/// 
///
/// @param countryCodeIso3 The iso3 code of the country
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<SWGStateResource>*
-(NSURLSessionTask*) getCountryStatesWithCountryCodeIso3: (NSString*) countryCodeIso3
    completionHandler: (void (^)(NSArray<SWGStateResource>* output, NSError* error)) handler;


/// Get the currency information of your country
/// Determined by geo ip location, currency to country mapping and a fallback setting
///
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGCurrencyResource*
-(NSURLSessionTask*) getCurrencyByGeoLocationWithCompletionHandler: 
    (void (^)(SWGCurrencyResource* output, NSError* error)) handler;



@end
