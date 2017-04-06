#import <Foundation/Foundation.h>
#import "JSAPICouponItem.h"
#import "JSAPIItemTemplateResource.h"
#import "JSAPIPageResourceItemTemplateResource_.h"
#import "JSAPIResult.h"
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



@interface JSAPIStoreCouponsApi: NSObject <JSAPIApi>

extern NSString* kJSAPIStoreCouponsApiErrorDomain;
extern NSInteger kJSAPIStoreCouponsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a coupon item
/// SKUs have to be unique in the entire store.
///
/// @param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional) (default to false)
/// @param couponItem The coupon item object (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPICouponItem*
-(NSURLSessionTask*) createCouponItemWithCascade: (NSNumber*) cascade
    couponItem: (JSAPICouponItem*) couponItem
    completionHandler: (void (^)(JSAPICouponItem* output, NSError* error)) handler;


/// Create a coupon template
/// Coupon Templates define a type of coupon and the properties they have.
///
/// @param couponTemplateResource The new coupon template (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIItemTemplateResource*
-(NSURLSessionTask*) createCouponTemplateWithCouponTemplateResource: (JSAPIItemTemplateResource*) couponTemplateResource
    completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;


/// Delete a coupon item
/// 
///
/// @param _id The id of the coupon
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) deleteCouponItemWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete a coupon template
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
-(NSURLSessionTask*) deleteCouponTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single coupon item
/// 
///
/// @param _id The id of the coupon
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPICouponItem*
-(NSURLSessionTask*) getCouponItemWithId: (NSNumber*) _id
    completionHandler: (void (^)(JSAPICouponItem* output, NSError* error)) handler;


/// Get a single coupon template
/// Coupon Templates define a type of coupon and the properties they have.
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
-(NSURLSessionTask*) getCouponTemplateWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;


/// List and search coupon templates
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
-(NSURLSessionTask*) getCouponTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceItemTemplateResource_* output, NSError* error)) handler;


/// Update a coupon item
/// 
///
/// @param _id The id of the coupon
/// @param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional) (default to false)
/// @param couponItem The coupon item object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPICouponItem*
-(NSURLSessionTask*) updateCouponItemWithId: (NSNumber*) _id
    cascade: (NSNumber*) cascade
    couponItem: (JSAPICouponItem*) couponItem
    completionHandler: (void (^)(JSAPICouponItem* output, NSError* error)) handler;


/// Update a coupon template
/// 
///
/// @param _id The id of the template
/// @param couponTemplateResource The coupon template resource object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIItemTemplateResource*
-(NSURLSessionTask*) updateCouponTemplateWithId: (NSString*) _id
    couponTemplateResource: (JSAPIItemTemplateResource*) couponTemplateResource
    completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;



@end
