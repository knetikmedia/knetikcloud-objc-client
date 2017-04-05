#import <Foundation/Foundation.h>
#import "JSAPIOAuth2Resource.h"
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



@interface JSAPIAccessTokenApi: NSObject <JSAPIApi>

extern NSString* kJSAPIAccessTokenApiErrorDomain;
extern NSInteger kJSAPIAccessTokenApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get access token
/// 
///
/// @param grantType Grant type (default to client_credentials)
/// @param clientId The id of the client (default to knetik)
/// @param clientSecret The secret key of the client.  Used only with a grant_type of client_credentials (optional)
/// @param username The username of the client.  Used only with a grant_type of password (optional)
/// @param password The password of the client.  Used only with a grant_type of password (optional)
/// 
///  code:200 message:"OK"
///
/// @return JSAPIOAuth2Resource*
-(NSURLSessionTask*) getOAuthTokenWithGrantType: (NSString*) grantType
    clientId: (NSString*) clientId
    clientSecret: (NSString*) clientSecret
    username: (NSString*) username
    password: (NSString*) password
    completionHandler: (void (^)(JSAPIOAuth2Resource* output, NSError* error)) handler;



@end
