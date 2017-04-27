#import <Foundation/Foundation.h>
#import "JSAPIAmazonS3Activity.h"
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



@interface JSAPIAmazonWebServicesS3Api: NSObject <JSAPIApi>

extern NSString* kJSAPIAmazonWebServicesS3ApiErrorDomain;
extern NSInteger kJSAPIAmazonWebServicesS3ApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get a signed S3 URL
/// Requires the file name and file content type (i.e., 'video/mpeg')
///
/// @param filename The file name (optional)
/// @param contentType The content type (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIAmazonS3Activity*
-(NSURLSessionTask*) getSignedS3URLWithFilename: (NSString*) filename
    contentType: (NSString*) contentType
    completionHandler: (void (^)(JSAPIAmazonS3Activity* output, NSError* error)) handler;



@end
