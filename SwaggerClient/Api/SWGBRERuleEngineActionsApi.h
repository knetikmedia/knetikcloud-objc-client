#import <Foundation/Foundation.h>
#import "SWGActionResource.h"
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



@interface SWGBRERuleEngineActionsApi: NSObject <SWGApi>

extern NSString* kSWGBRERuleEngineActionsApiErrorDomain;
extern NSInteger kSWGBRERuleEngineActionsApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Get a list of available actions
/// 
///
/// @param filterCategory Filter for actions that are within a specific category (optional)
/// @param filterName Filter for actions that have names containing the given string (optional)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<SWGActionResource>*
-(NSNumber*) getActionsUsingGETWithFilterCategory: (NSString*) filterCategory
    filterName: (NSString*) filterName
    completionHandler: (void (^)(NSArray<SWGActionResource>* output, NSError* error)) handler;



@end