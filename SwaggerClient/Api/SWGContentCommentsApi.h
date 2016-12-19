#import <Foundation/Foundation.h>
#import "SWGCommentResource.h"
#import "SWGCommentSearch.h"
#import "SWGPageCommentResource_.h"
#import "SWGApi.h"

/**
* Knetik Platform API Documentation Latest
* No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGContentCommentsApi: NSObject <SWGApi>

extern NSString* kSWGContentCommentsApiErrorDomain;
extern NSInteger kSWGContentCommentsApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Add a new comment
/// 
///
/// @param commentResource The comment to be added (optional)
/// 
///  code:200 message:"OK",
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGCommentResource*
-(NSNumber*) addCommentUsingPOSTWithCommentResource: (SWGCommentResource*) commentResource
    completionHandler: (void (^)(SWGCommentResource* output, NSError* error)) handler;


/// Delete a comment
/// 
///
/// @param _id The comment id
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSNumber*) deleteCommentUsingDELETEWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Returns a comment by comment id
/// 
///
/// @param _id The comment id
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGCommentResource*
-(NSNumber*) getCommentUsingGETWithId: (NSNumber*) _id
    completionHandler: (void (^)(SWGCommentResource* output, NSError* error)) handler;


/// Returns a page of comments
/// 
///
/// @param context Get comments by context type
/// @param contextId Get comments by context id
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageCommentResource_*
-(NSNumber*) getCommentsUsingGETWithContext: (NSString*) context
    contextId: (NSNumber*) contextId
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(SWGPageCommentResource_* output, NSError* error)) handler;


/// Search the comment index
/// The body is an ElasticSearch query json. Please see their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/index.html'>documentation</a> for details on the format and search options
///
/// @param query The search query (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"This is not a response, but demonstrates the format of the index object. the actual response will be a Page of comments as seen in the GET endpoint.",
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGCommentSearch*
-(NSNumber*) searchCommentsUsingPOSTWithQuery: (NSObject*) query
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(SWGCommentSearch* output, NSError* error)) handler;


/// Update comment content
/// 
///
/// @param _id The comment id
/// @param content The comment content (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) updateCommentUsingPUTWithId: (NSNumber*) _id
    content: (NSString*) content
    completionHandler: (void (^)(NSError* error)) handler;



@end