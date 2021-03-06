#import <Foundation/Foundation.h>
#import "JSAPIBundleItem.h"
#import "JSAPIItemTemplateResource.h"
#import "JSAPIPageResourceItemTemplateResource_.h"
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



@interface JSAPIStoreBundlesApi: NSObject <JSAPIApi>

extern NSString* kJSAPIStoreBundlesApiErrorDomain;
extern NSInteger kJSAPIStoreBundlesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a bundle item
/// The SKU for the bundle itself must be unique and there can only be one SKU.  Extra notes for price_override:  The price of all the items (multiplied by the quantity) must equal the price of the bundle.  With individual prices set, items will be processed individually and can be refunded as such.  However, if all prices are set to null, the price of the bundle will be used and will be treated as one item. <br><br><b>Permissions Needed:</b> BUNDLES_ADMIN
///
/// @param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional) (default to false)
/// @param bundleItem The bundle item object (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIBundleItem*
-(NSURLSessionTask*) createBundleItemWithCascade: (NSNumber*) cascade
    bundleItem: (JSAPIBundleItem*) bundleItem
    completionHandler: (void (^)(JSAPIBundleItem* output, NSError* error)) handler;


/// Create a bundle template
/// Bundle Templates define a type of bundle and the properties they have. <br><br><b>Permissions Needed:</b> BUNDLES_ADMIN
///
/// @param bundleTemplateResource The new bundle template (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIItemTemplateResource*
-(NSURLSessionTask*) createBundleTemplateWithBundleTemplateResource: (JSAPIItemTemplateResource*) bundleTemplateResource
    completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;


/// Delete a bundle item
/// <b>Permissions Needed:</b> BUNDLES_ADMIN
///
/// @param _id The id of the bundle
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteBundleItemWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete a bundle template
/// <b>Permissions Needed:</b> BUNDLES_ADMIN
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
/// @return void
-(NSURLSessionTask*) deleteBundleTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single bundle item
/// <b>Permissions Needed:</b> ANY
///
/// @param _id The id of the bundle
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIBundleItem*
-(NSURLSessionTask*) getBundleItemWithId: (NSNumber*) _id
    completionHandler: (void (^)(JSAPIBundleItem* output, NSError* error)) handler;


/// Get a single bundle template
/// Bundle Templates define a type of bundle and the properties they have. <br><br><b>Permissions Needed:</b> ANY
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
-(NSURLSessionTask*) getBundleTemplateWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;


/// List and search bundle templates
/// <b>Permissions Needed:</b> ANY
///
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
/// @return JSAPIPageResourceItemTemplateResource_*
-(NSURLSessionTask*) getBundleTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceItemTemplateResource_* output, NSError* error)) handler;


/// Update a bundle item
/// <b>Permissions Needed:</b> BUNDLES_ADMIN
///
/// @param _id The id of the bundle
/// @param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional) (default to false)
/// @param bundleItem The bundle item object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIBundleItem*
-(NSURLSessionTask*) updateBundleItemWithId: (NSNumber*) _id
    cascade: (NSNumber*) cascade
    bundleItem: (JSAPIBundleItem*) bundleItem
    completionHandler: (void (^)(JSAPIBundleItem* output, NSError* error)) handler;


/// Update a bundle template
/// <b>Permissions Needed:</b> BUNDLES_ADMIN
///
/// @param _id The id of the template
/// @param bundleTemplateResource The bundle template resource object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIItemTemplateResource*
-(NSURLSessionTask*) updateBundleTemplateWithId: (NSString*) _id
    bundleTemplateResource: (JSAPIItemTemplateResource*) bundleTemplateResource
    completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;



@end
