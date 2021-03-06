#import <Foundation/Foundation.h>
#import "JSAPICommentResource.h"
#import "JSAPIPageResourceCommentResource_.h"
#import "JSAPIResult.h"
#import "JSAPIStringWrapper.h"
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



@interface JSAPIContentCommentsApi: NSObject <JSAPIApi>

extern NSString* kJSAPIContentCommentsApiErrorDomain;
extern NSInteger kJSAPIContentCommentsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Add a new comment
/// <b>Permissions Needed:</b> COMMENTS_USER or COMMENTS_ADMIN
///
/// @param commentResource The comment to be added (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPICommentResource*
-(NSURLSessionTask*) addCommentWithCommentResource: (JSAPICommentResource*) commentResource
    completionHandler: (void (^)(JSAPICommentResource* output, NSError* error)) handler;


/// Delete a comment
/// <b>Permissions Needed:</b> COMMENTS_USER or COMMENTS_ADMIN
///
/// @param _id The comment id
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteCommentWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Return a comment
/// <b>Permissions Needed:</b> ANY
///
/// @param _id The comment id
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPICommentResource*
-(NSURLSessionTask*) getCommentWithId: (NSNumber*) _id
    completionHandler: (void (^)(JSAPICommentResource* output, NSError* error)) handler;


/// Returns a page of comments
/// <b>Permissions Needed:</b> ANY
///
/// @param context Get comments by context type
/// @param contextId Get comments by context id
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceCommentResource_*
-(NSURLSessionTask*) getCommentsWithContext: (NSString*) context
    contextId: (NSNumber*) contextId
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceCommentResource_* output, NSError* error)) handler;


/// Update a comment
/// <b>Permissions Needed:</b> COMMENTS_USER or COMMENTS_ADMIN
///
/// @param _id The comment id
/// @param content The comment content (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) updateCommentWithId: (NSNumber*) _id
    content: (JSAPIStringWrapper*) content
    completionHandler: (void (^)(NSError* error)) handler;



@end
