#import <Foundation/Foundation.h>
#import "SWGPageVendorResource_.h"
#import "SWGVendorResource.h"
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



@interface SWGStoreVendorsApi: NSObject <SWGApi>

extern NSString* kSWGStoreVendorsApiErrorDomain;
extern NSInteger kSWGStoreVendorsApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Create a vendor
///
/// @param vendor The vendor (optional)
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGVendorResource*
-(NSNumber*) createVendorUsingPOSTWithVendor: (SWGVendorResource*) vendor
    completionHandler: (void (^)(SWGVendorResource* output, NSError* error)) handler;

/// Delete a vendor
///
/// @param _id The id of the vendor
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
-(NSNumber*) deleteVendorUsingDELETEWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;

/// Get a single vendor
///
/// @param _id The id of the vendor
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGVendorResource*
-(NSNumber*) getVendorUsingGETWithId: (NSNumber*) _id
    completionHandler: (void (^)(SWGVendorResource* output, NSError* error)) handler;

/// List and search vendors
///
/// @param filterName Filters vendors by name starting with the text provided in the filter (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPageVendorResource_*
-(NSNumber*) getVendorsUsingGETWithFilterName: (NSString*) filterName
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageVendorResource_* output, NSError* error)) handler;

/// Update a vendor
///
/// @param _id The id of the vendor
/// @param vendor The vendor (optional)
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
-(NSNumber*) updateVendorUsingPUTWithId: (NSNumber*) _id
    vendor: (SWGVendorResource*) vendor
    completionHandler: (void (^)(NSError* error)) handler;


@end
