#import <Foundation/Foundation.h>
#import "JSAPIBreCategoryResource.h"
#import "JSAPIPageResourceBreCategoryResource_.h"
#import "JSAPIPageResourceTemplateResource_.h"
#import "JSAPIResult.h"
#import "JSAPITemplateResource.h"
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



@interface JSAPIBRERuleEngineCategoriesApi: NSObject <JSAPIApi>

extern NSString* kJSAPIBRERuleEngineCategoriesApiErrorDomain;
extern NSInteger kJSAPIBRERuleEngineCategoriesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a BRE category template
/// Templates define a type of BRE category and the properties they have
///
/// @param template The category template to create (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPITemplateResource*
-(NSURLSessionTask*) createBRECategoryTemplateWithTemplate: (JSAPITemplateResource*) template
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;


/// Delete a BRE category template
/// If cascade = 'detach', it will force delete the template even if it's attached to other objects
///
/// @param _id The id of the template
/// @param cascade The value needed to delete used templates (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) deleteBRECategoryTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;


/// List categories
/// 
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceBreCategoryResource_*
-(NSURLSessionTask*) getBRECategoriesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceBreCategoryResource_* output, NSError* error)) handler;


/// Get a single category
/// 
///
/// @param name The category name
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIBreCategoryResource*
-(NSURLSessionTask*) getBRECategoryWithName: (NSString*) name
    completionHandler: (void (^)(JSAPIBreCategoryResource* output, NSError* error)) handler;


/// Get a single BRE category template
/// 
///
/// @param _id The id of the template
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPITemplateResource*
-(NSURLSessionTask*) getBRECategoryTemplateWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;


/// List and search BRE category templates
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
/// @return JSAPIPageResourceTemplateResource_*
-(NSURLSessionTask*) getBRECategoryTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;


/// Update a category
/// 
///
/// @param name The category name
/// @param category The updated BRE category information (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIBreCategoryResource*
-(NSURLSessionTask*) updateBRECategoryWithName: (NSString*) name
    category: (JSAPIBreCategoryResource*) category
    completionHandler: (void (^)(JSAPIBreCategoryResource* output, NSError* error)) handler;


/// Update a BRE category template
/// 
///
/// @param _id The id of the template
/// @param template The updated category template definition (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPITemplateResource*
-(NSURLSessionTask*) updateBRECategoryTemplateWithId: (NSString*) _id
    template: (JSAPITemplateResource*) template
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;



@end
