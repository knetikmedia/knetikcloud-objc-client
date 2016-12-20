#import <Foundation/Foundation.h>
#import "SWGActivityOccurrenceCreationFailure.h"
#import "SWGActivityOccurrenceResource.h"
#import "SWGActivityOccurrenceResults.h"
#import "SWGActivityResource.h"
#import "SWGPageResourceBareActivityResource_.h"
#import "SWGApi.h"

/**
* Knetik Platform API Documentation Latest
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://demo.sandbox.knetikcloud.com
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGActivitiesApi: NSObject <SWGApi>

extern NSString* kSWGActivitiesApiErrorDomain;
extern NSInteger kSWGActivitiesApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Updated the status of an activity occurrence
/// If setting to 'FINISHED' you must POST to /results instead to record the metrics and get synchronous reward results
///
/// @param activityOccurrenceId The id of the activity occurrence
/// @param activityCccurrenceStatus The activity occurrence status object (optional)
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
-(NSNumber*) completeActivityOccurrenceUsingPUTWithActivityOccurrenceId: (NSNumber*) activityOccurrenceId
    activityCccurrenceStatus: (NSString*) activityCccurrenceStatus
    completionHandler: (void (^)(NSError* error)) handler;

/// Create a new activity occurrence
/// Has to enforce extra rules if not used as an admin
///
/// @param test if true, indicates that the occurrence should NOT be created. This can be used to test for eligibility and valid settings (optional) (default to false)
/// @param activityOccurrenceResource The activity occurrence object (optional)
///  code:201 message:"Sucessful creation",
///  code:401 message:"Unauthorized",
///  code:403 message:"Attempted to set an admin only field (no 'result' returned), or missing an entitlement/wallet balance (result is an array of ActivityOccurrenceJoinResult explaining which users had what problems)",
///  code:404 message:"Not Found"
/// @return SWGActivityOccurrenceResource*
-(NSNumber*) createActivityOccurrenceUsingPOSTWithTest: (NSNumber*) test
    activityOccurrenceResource: (SWGActivityOccurrenceResource*) activityOccurrenceResource
    completionHandler: (void (^)(SWGActivityOccurrenceResource* output, NSError* error)) handler;

/// Create an activity
///
/// @param activityResource The activity resource object (optional)
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGActivityResource*
-(NSNumber*) createActivityUsingPOSTWithActivityResource: (SWGActivityResource*) activityResource
    completionHandler: (void (^)(SWGActivityResource* output, NSError* error)) handler;

/// Delete an activity
///
/// @param _id The id of the activity
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
-(NSNumber*) deleteActivityUsingDELETEWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;

/// List activity definitions
///
/// @param filterTemplate Filter for activities that are templates, or specifically not if false (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPageResourceBareActivityResource_*
-(NSNumber*) getActivitiesUsingGETWithFilterTemplate: (NSNumber*) filterTemplate
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceBareActivityResource_* output, NSError* error)) handler;

/// Get a single activity
///
/// @param _id The id of the activity
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGActivityResource*
-(NSNumber*) getActivityUsingGETWithId: (NSNumber*) _id
    completionHandler: (void (^)(SWGActivityResource* output, NSError* error)) handler;

/// Sets the status of an activity occurrence to FINISHED and logs metrics
///
/// @param activityOccurrenceId The id of the activity occurrence
/// @param activityOccurrenceResults The activity occurrence object (optional)
///  code:200 message:"OK",
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGActivityOccurrenceResults*
-(NSNumber*) postResultsUsingPOSTWithActivityOccurrenceId: (NSNumber*) activityOccurrenceId
    activityOccurrenceResults: (SWGActivityOccurrenceResults*) activityOccurrenceResults
    completionHandler: (void (^)(SWGActivityOccurrenceResults* output, NSError* error)) handler;

/// Update an activity
///
/// @param _id The id of the activity
/// @param activityResource The activity resource object (optional)
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
-(NSNumber*) updateActivityUsingPUTWithId: (NSNumber*) _id
    activityResource: (SWGActivityResource*) activityResource
    completionHandler: (void (^)(NSError* error)) handler;


@end