#import <Foundation/Foundation.h>
#import "JSAPIClientResource.h"
#import "JSAPIGrantTypeResource.h"
#import "JSAPIPageResourceClientResource_.h"
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



@interface JSAPIAuthClientsApi: NSObject <JSAPIApi>

extern NSString* kJSAPIAuthClientsApiErrorDomain;
extern NSInteger kJSAPIAuthClientsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a new client
/// 
///
/// @param clientResource The client resource object (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIClientResource*
-(NSURLSessionTask*) createClientWithClientResource: (JSAPIClientResource*) clientResource
    completionHandler: (void (^)(JSAPIClientResource* output, NSError* error)) handler;


/// Delete a client
/// 
///
/// @param clientKey The key of the client
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) deleteClientWithClientKey: (NSString*) clientKey
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single client
/// 
///
/// @param clientKey The key of the client
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIClientResource*
-(NSURLSessionTask*) getClientWithClientKey: (NSString*) clientKey
    completionHandler: (void (^)(JSAPIClientResource* output, NSError* error)) handler;


/// List available client grant types
/// 
///
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<JSAPIGrantTypeResource>*
-(NSURLSessionTask*) getClientGrantTypesWithCompletionHandler: 
    (void (^)(NSArray<JSAPIGrantTypeResource>* output, NSError* error)) handler;


/// List and search clients
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
/// @return JSAPIPageResourceClientResource_*
-(NSURLSessionTask*) getClientsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceClientResource_* output, NSError* error)) handler;


/// Set grant types for a client
/// 
///
/// @param clientKey The key of the client
/// @param grantList A list of unique grant types (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) setClientGrantTypesWithClientKey: (NSString*) clientKey
    grantList: (NSArray<NSString*>*) grantList
    completionHandler: (void (^)(NSError* error)) handler;


/// Set redirect uris for a client
/// 
///
/// @param clientKey The key of the client
/// @param redirectList A list of unique redirect uris (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) setClientRedirectUrisWithClientKey: (NSString*) clientKey
    redirectList: (NSArray<NSString*>*) redirectList
    completionHandler: (void (^)(NSError* error)) handler;


/// Update a client
/// 
///
/// @param clientKey The key of the client
/// @param clientResource The client resource object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIClientResource*
-(NSURLSessionTask*) updateClientWithClientKey: (NSString*) clientKey
    clientResource: (JSAPIClientResource*) clientResource
    completionHandler: (void (^)(JSAPIClientResource* output, NSError* error)) handler;



@end
