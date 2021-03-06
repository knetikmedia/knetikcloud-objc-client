#import <Foundation/Foundation.h>
#import "JSAPIFacebookToken.h"
#import "JSAPIResult.h"
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



@interface JSAPISocialFacebookApi: NSObject <JSAPIApi>

extern NSString* kJSAPISocialFacebookApiErrorDomain;
extern NSInteger kJSAPISocialFacebookApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Link facebook account
/// Links the current user account to a facebook account, using the acccess token from facebook. Can also be used to update the access token after it has expired. <br><br><b>Permissions Needed:</b> Non-facebook user token
///
/// @param facebookToken The token from facebook (optional)
/// 
///  code:202 message:"Accepted",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) linkAccountsWithFacebookToken: (JSAPIFacebookToken*) facebookToken
    completionHandler: (void (^)(NSError* error)) handler;



@end
