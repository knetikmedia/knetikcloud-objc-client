#import <Foundation/Foundation.h>
#import "SWGItemTemplateResource.h"
#import "SWGPageItemTemplateResource_.h"
#import "SWGShippingItem.h"
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



@interface SWGStoreShippingApi: NSObject <SWGApi>

extern NSString* kSWGStoreShippingApiErrorDomain;
extern NSInteger kSWGStoreShippingApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Create a shipping item
/// A shipping item represents a shipping option and cost. SKUs have to be unique in the entire store.
///
/// @param shippingItem The shipping item object (optional)
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGShippingItem*
-(NSNumber*) createShippingItemUsingPOSTWithShippingItem: (SWGShippingItem*) shippingItem
    completionHandler: (void (^)(SWGShippingItem* output, NSError* error)) handler;

/// Create a shipping template
/// Shipping Templates define a type of shipping and the properties they have.
///
/// @param shippingTemplateResource The new shipping template (optional)
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGItemTemplateResource*
-(NSNumber*) createShippingTemplateUsingPOSTWithShippingTemplateResource: (SWGItemTemplateResource*) shippingTemplateResource
    completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;

/// Delete a shipping item
///
/// @param _id The id of the shipping item
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
-(NSNumber*) deleteShippingItemUsingDELETEWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;

/// Delete a shipping template
///
/// @param _id The id of the template
/// @param cascade force deleting the template if it's attached to other objects, cascade = detach (optional)
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
-(NSNumber*) deleteShippingTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;

/// Get a single shipping item
///
/// @param _id The id of the shipping item
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGShippingItem*
-(NSNumber*) getShippingItemUsingGETWithId: (NSNumber*) _id
    completionHandler: (void (^)(SWGShippingItem* output, NSError* error)) handler;

/// Get a single shipping template
/// Shipping Templates define a type of shipping and the properties they have.
///
/// @param _id The id of the template
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGItemTemplateResource*
-(NSNumber*) getShippingTemplateUsingGETWithId: (NSString*) _id
    completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;

/// List and search shipping templates
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPageItemTemplateResource_*
-(NSNumber*) getShippingTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageItemTemplateResource_* output, NSError* error)) handler;

/// Update a shipping item
///
/// @param _id The id of the shipping item
/// @param shippingItem The shipping item object (optional)
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
-(NSNumber*) updateShippingItemUsingPUTWithId: (NSNumber*) _id
    shippingItem: (SWGShippingItem*) shippingItem
    completionHandler: (void (^)(NSError* error)) handler;

/// Update a shipping template
///
/// @param _id The id of the template
/// @param shippingTemplateResource The shipping template resource object (optional)
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
-(NSNumber*) updateShippingTemplateUsingPUTWithId: (NSString*) _id
    shippingTemplateResource: (SWGItemTemplateResource*) shippingTemplateResource
    completionHandler: (void (^)(NSError* error)) handler;


@end
