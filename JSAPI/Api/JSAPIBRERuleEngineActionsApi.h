#import <Foundation/Foundation.h>
#import "JSAPIActionResource.h"
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



@interface JSAPIBRERuleEngineActionsApi: NSObject <JSAPIApi>

extern NSString* kJSAPIBRERuleEngineActionsApiErrorDomain;
extern NSInteger kJSAPIBRERuleEngineActionsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get a list of available actions
/// 
///
/// @param filterCategory Filter for actions that are within a specific category (optional)
/// @param filterName Filter for actions that have names containing the given string (optional)
/// @param filterTags Filter for actions that have all of the given tags (comma separated list) (optional)
/// @param filterSearch Filter for actions containing the given words somewhere within name, description and tags (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<JSAPIActionResource>*
-(NSURLSessionTask*) getBREActionsWithFilterCategory: (NSString*) filterCategory
    filterName: (NSString*) filterName
    filterTags: (NSString*) filterTags
    filterSearch: (NSString*) filterSearch
    completionHandler: (void (^)(NSArray<JSAPIActionResource>* output, NSError* error)) handler;



@end
