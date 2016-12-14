#import <Foundation/Foundation.h>
#import "SWGBreEvent.h"
#import "SWGOAuth2Authentication.h"
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



@interface SWGBRERuleEngineEventsApi: NSObject <SWGApi>

extern NSString* kSWGBRERuleEngineEventsApiErrorDomain;
extern NSInteger kSWGBRERuleEngineEventsApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Fire a new event, based on an existing trigger
/// Parameters within the event must match names and types from the trigger. Actual rule execution is asynchornous.
///
/// @param breEvent The BRE event object (optional)
/// @param authentication The authentication object (optional)
/// 
///  code:200 message:"OK",
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) fireEventUsingPOSTWithBreEvent: (SWGBreEvent*) breEvent
    authentication: (SWGOAuth2Authentication*) authentication
    completionHandler: (void (^)(NSError* error)) handler;



@end
