#import <Foundation/Foundation.h>
#import "SWGMetricResource.h"
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



@interface SWGGamificationMetricsApi: NSObject <SWGApi>

extern NSString* kSWGGamificationMetricsApiErrorDomain;
extern NSInteger kSWGGamificationMetricsApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Add a metric
/// Post a new score/stat for an activity occurrence without ending the occurrence itself
///
/// @param metric The new metric (optional)
/// 
///  code:201 message:"Metric added",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) addMetricUsingPOSTWithMetric: (SWGMetricResource*) metric
    completionHandler: (void (^)(NSError* error)) handler;



@end