#import <Foundation/Foundation.h>
#import "SWGBreCategoryResource.h"
#import "SWGPageBreCategoryResource_.h"
#import "SWGPageTemplateResource_.h"
#import "SWGTemplateResource.h"
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



@interface SWGBRERuleEngineCategoriesApi: NSObject <SWGApi>

extern NSString* kSWGBRERuleEngineCategoriesApiErrorDomain;
extern NSInteger kSWGBRERuleEngineCategoriesApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Create a BRE category template
/// Templates define a type of BRE category and the properties they have
///
/// @param template The category template to create (optional)
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGTemplateResource*
-(NSNumber*) createTemplateUsingPOST1WithTemplate: (SWGTemplateResource*) template
    completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;

/// Delete a BRE category template
/// If cascade = 'detach', it will force delete the template even if it's attached to other objects
///
/// @param _id The id of the template
/// @param cascade The value needed to delete used templates (optional)
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
-(NSNumber*) deleteTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;

/// List categories
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPageBreCategoryResource_*
-(NSNumber*) getCategoriesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(SWGPageBreCategoryResource_* output, NSError* error)) handler;

/// Get a single category
///
/// @param name The category name
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGBreCategoryResource*
-(NSNumber*) getCategoryUsingGETWithName: (NSString*) name
    completionHandler: (void (^)(SWGBreCategoryResource* output, NSError* error)) handler;

/// Get a single BRE category template
///
/// @param _id The id of the template
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGTemplateResource*
-(NSNumber*) getTemplateUsingGETWithId: (NSString*) _id
    completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;

/// List and search BRE category templates
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPageTemplateResource_*
-(NSNumber*) getTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageTemplateResource_* output, NSError* error)) handler;

/// Update a category
///
/// @param name The category name
/// @param category The updated BRE category information (optional)
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
-(NSNumber*) updateCategoryUsingPUTWithName: (NSString*) name
    category: (SWGBreCategoryResource*) category
    completionHandler: (void (^)(NSError* error)) handler;

/// Update a BRE category template
///
/// @param _id The id of the template
/// @param template The updated category template definition (optional)
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
-(NSNumber*) updateTemplateUsingPUT1WithId: (NSString*) _id
    template: (SWGTemplateResource*) template
    completionHandler: (void (^)(NSError* error)) handler;


@end
