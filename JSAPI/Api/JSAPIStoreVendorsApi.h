#import <Foundation/Foundation.h>
#import "JSAPIItemTemplateResource.h"
#import "JSAPIPageResourceItemTemplateResource_.h"
#import "JSAPIPageResourceVendorResource_.h"
#import "JSAPIResult.h"
#import "JSAPIVendorResource.h"
#import "JSAPIApi.h"

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



@interface JSAPIStoreVendorsApi: NSObject <JSAPIApi>

extern NSString* kJSAPIStoreVendorsApiErrorDomain;
extern NSInteger kJSAPIStoreVendorsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a vendor
/// 
///
/// @param vendor The vendor (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIVendorResource*
-(NSURLSessionTask*) createVendorWithVendor: (JSAPIVendorResource*) vendor
    completionHandler: (void (^)(JSAPIVendorResource* output, NSError* error)) handler;


/// Create a vendor template
/// Vendor Templates define a type of vendor and the properties they have.
///
/// @param vendorTemplateResource The new vendor template (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIItemTemplateResource*
-(NSURLSessionTask*) createVendorTemplateWithVendorTemplateResource: (JSAPIItemTemplateResource*) vendorTemplateResource
    completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;


/// Delete a vendor
/// 
///
/// @param _id The id of the vendor
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) deleteVendorWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete a vendor template
/// 
///
/// @param _id The id of the template
/// @param cascade force deleting the template if it&#39;s attached to other objects, cascade &#x3D; detach (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) deleteVendorTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single vendor
/// 
///
/// @param _id The id of the vendor
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIVendorResource*
-(NSURLSessionTask*) getVendorWithId: (NSNumber*) _id
    completionHandler: (void (^)(JSAPIVendorResource* output, NSError* error)) handler;


/// Get a single vendor template
/// Vendor Templates define a type of vendor and the properties they have.
///
/// @param _id The id of the template
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIItemTemplateResource*
-(NSURLSessionTask*) getVendorTemplateWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;


/// List and search vendor templates
/// 
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceItemTemplateResource_*
-(NSURLSessionTask*) getVendorTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceItemTemplateResource_* output, NSError* error)) handler;


/// List and search vendors
/// 
///
/// @param filterName Filters vendors by name starting with the text provided in the filter (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceVendorResource_*
-(NSURLSessionTask*) getVendorsWithFilterName: (NSString*) filterName
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceVendorResource_* output, NSError* error)) handler;


/// Update a vendor
/// 
///
/// @param _id The id of the vendor
/// @param vendor The vendor (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIVendorResource*
-(NSURLSessionTask*) updateVendorWithId: (NSNumber*) _id
    vendor: (JSAPIVendorResource*) vendor
    completionHandler: (void (^)(JSAPIVendorResource* output, NSError* error)) handler;


/// Update a vendor template
/// 
///
/// @param _id The id of the template
/// @param vendorTemplateResource The vendor template resource object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIItemTemplateResource*
-(NSURLSessionTask*) updateVendorTemplateWithId: (NSString*) _id
    vendorTemplateResource: (JSAPIItemTemplateResource*) vendorTemplateResource
    completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;



@end
