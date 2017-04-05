#import <Foundation/Foundation.h>
#import "JSAPIItemTemplateResource.h"
#import "JSAPIPageResourceItemTemplateResource_.h"
#import "JSAPIResult.h"
#import "JSAPIShippingItem.h"
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



@interface JSAPIStoreShippingApi: NSObject <JSAPIApi>

extern NSString* kJSAPIStoreShippingApiErrorDomain;
extern NSInteger kJSAPIStoreShippingApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a shipping item
/// A shipping item represents a shipping option and cost. SKUs have to be unique in the entire store.
///
/// @param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional) (default to false)
/// @param shippingItem The shipping item object (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIShippingItem*
-(NSURLSessionTask*) createShippingItemWithCascade: (NSNumber*) cascade
    shippingItem: (JSAPIShippingItem*) shippingItem
    completionHandler: (void (^)(JSAPIShippingItem* output, NSError* error)) handler;


/// Create a shipping template
/// Shipping Templates define a type of shipping and the properties they have.
///
/// @param shippingTemplateResource The new shipping template (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIItemTemplateResource*
-(NSURLSessionTask*) createShippingTemplateWithShippingTemplateResource: (JSAPIItemTemplateResource*) shippingTemplateResource
    completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;


/// Delete a shipping item
/// 
///
/// @param _id The id of the shipping item
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) deleteShippingItemWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete a shipping template
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
-(NSURLSessionTask*) deleteShippingTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single shipping item
/// 
///
/// @param _id The id of the shipping item
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIShippingItem*
-(NSURLSessionTask*) getShippingItemWithId: (NSNumber*) _id
    completionHandler: (void (^)(JSAPIShippingItem* output, NSError* error)) handler;


/// Get a single shipping template
/// Shipping Templates define a type of shipping and the properties they have.
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
-(NSURLSessionTask*) getShippingTemplateWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;


/// List and search shipping templates
/// 
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
-(NSURLSessionTask*) getShippingTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceItemTemplateResource_* output, NSError* error)) handler;


/// Update a shipping item
/// 
///
/// @param _id The id of the shipping item
/// @param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional) (default to false)
/// @param shippingItem The shipping item object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIShippingItem*
-(NSURLSessionTask*) updateShippingItemWithId: (NSNumber*) _id
    cascade: (NSNumber*) cascade
    shippingItem: (JSAPIShippingItem*) shippingItem
    completionHandler: (void (^)(JSAPIShippingItem* output, NSError* error)) handler;


/// Update a shipping template
/// 
///
/// @param _id The id of the template
/// @param shippingTemplateResource The shipping template resource object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIItemTemplateResource*
-(NSURLSessionTask*) updateShippingTemplateWithId: (NSString*) _id
    shippingTemplateResource: (JSAPIItemTemplateResource*) shippingTemplateResource
    completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;



@end
