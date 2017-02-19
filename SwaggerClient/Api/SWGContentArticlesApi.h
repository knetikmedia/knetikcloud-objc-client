#import <Foundation/Foundation.h>
#import "SWGArticleResource.h"
#import "SWGPageResourceArticleResource_.h"
#import "SWGPageResourceTemplateResource_.h"
#import "SWGResult.h"
#import "SWGTemplateResource.h"
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



@interface SWGContentArticlesApi: NSObject <SWGApi>

extern NSString* kSWGContentArticlesApiErrorDomain;
extern NSInteger kSWGContentArticlesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a new article
/// Articles are blobs of text with titles, a category and assets. Formatting and display of the text is in the hands of the front end.
///
/// @param articleResource The new article (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGArticleResource*
-(NSURLSessionTask*) createArticleWithArticleResource: (SWGArticleResource*) articleResource
    completionHandler: (void (^)(SWGArticleResource* output, NSError* error)) handler;


/// Create an article template
/// Article Templates define a type of article and the properties they have
///
/// @param articleTemplateResource The article template resource object (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGTemplateResource*
-(NSURLSessionTask*) createArticleTemplateWithArticleTemplateResource: (SWGTemplateResource*) articleTemplateResource
    completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;


/// Delete an existing article
/// 
///
/// @param _id The article id
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) deleteArticleWithId: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete an article template
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
-(NSURLSessionTask*) deleteArticleTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single article
/// 
///
/// @param _id The article id
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGArticleResource*
-(NSURLSessionTask*) getArticleWithId: (NSString*) _id
    completionHandler: (void (^)(SWGArticleResource* output, NSError* error)) handler;


/// Get a single article template
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
/// @return SWGTemplateResource*
-(NSURLSessionTask*) getArticleTemplateWithId: (NSString*) _id
    completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;


/// List and search article templates
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
/// @return SWGPageResourceTemplateResource_*
-(NSURLSessionTask*) getArticleTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceTemplateResource_* output, NSError* error)) handler;


/// List and search articles
/// Get a list of articles with optional filtering. Assets will not be filled in on the resources returned. Use 'Get a single article' to retrieve the full resource with assets for a given item as needed.
///
/// @param filterCategory Filter for articles from a specific category by id (optional)
/// @param filterTagset Filter for articles with specified tags (separated by comma) (optional)
/// @param filterTitle Filter for articles whose title contains a string (optional)
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
/// @return SWGPageResourceArticleResource_*
-(NSURLSessionTask*) getArticlesWithFilterCategory: (NSString*) filterCategory
    filterTagset: (NSString*) filterTagset
    filterTitle: (NSString*) filterTitle
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceArticleResource_* output, NSError* error)) handler;


/// Update an existing article
/// 
///
/// @param _id The article id
/// @param articleResource The article object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGArticleResource*
-(NSURLSessionTask*) updateArticleWithId: (NSString*) _id
    articleResource: (SWGArticleResource*) articleResource
    completionHandler: (void (^)(SWGArticleResource* output, NSError* error)) handler;


/// Update an article template
/// 
///
/// @param _id The id of the template
/// @param articleTemplateResource The article template resource object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGTemplateResource*
-(NSURLSessionTask*) updateArticleTemplateWithId: (NSString*) _id
    articleTemplateResource: (SWGTemplateResource*) articleTemplateResource
    completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;



@end
