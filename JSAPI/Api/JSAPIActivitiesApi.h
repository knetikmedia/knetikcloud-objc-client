#import <Foundation/Foundation.h>
#import "JSAPIActivityOccurrenceCreationFailure.h"
#import "JSAPIActivityOccurrenceResource.h"
#import "JSAPIActivityOccurrenceResults.h"
#import "JSAPIActivityResource.h"
#import "JSAPIPageResourceBareActivityResource_.h"
#import "JSAPIPageResourceTemplateResource_.h"
#import "JSAPIResult.h"
#import "JSAPITemplateResource.h"
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



@interface JSAPIActivitiesApi: NSObject <JSAPIApi>

extern NSString* kJSAPIActivitiesApiErrorDomain;
extern NSInteger kJSAPIActivitiesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create an activity
/// 
///
/// @param activityResource The activity resource object (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIActivityResource*
-(NSURLSessionTask*) createActivityWithActivityResource: (JSAPIActivityResource*) activityResource
    completionHandler: (void (^)(JSAPIActivityResource* output, NSError* error)) handler;


/// Create a new activity occurrence
/// Has to enforce extra rules if not used as an admin
///
/// @param test if true, indicates that the occurrence should NOT be created. This can be used to test for eligibility and valid settings (optional) (default to false)
/// @param activityOccurrenceResource The activity occurrence object (optional)
/// 
///  code:201 message:"Sucessful creation",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Attempted to set an admin only field (no 'result' returned), or missing an entitlement/wallet balance (result is an array of ActivityOccurrenceJoinResult explaining which users had what problems)",
///  code:404 message:"Not Found"
///
/// @return JSAPIActivityOccurrenceResource*
-(NSURLSessionTask*) createActivityOccurrenceWithTest: (NSNumber*) test
    activityOccurrenceResource: (JSAPIActivityOccurrenceResource*) activityOccurrenceResource
    completionHandler: (void (^)(JSAPIActivityOccurrenceResource* output, NSError* error)) handler;


/// Create a activity template
/// Activity Templates define a type of activity and the properties they have
///
/// @param activityTemplateResource The activity template resource object (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPITemplateResource*
-(NSURLSessionTask*) createActivityTemplateWithActivityTemplateResource: (JSAPITemplateResource*) activityTemplateResource
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;


/// Delete an activity
/// 
///
/// @param _id The id of the activity
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) deleteActivityWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete a activity template
/// If cascade = 'detach', it will force delete the template even if it's attached to other objects
///
/// @param _id The id of the template
/// @param cascade The value needed to delete used templates (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) deleteActivityTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;


/// List activity definitions
/// 
///
/// @param filterTemplate Filter for activities that are templates, or specifically not if false (optional)
/// @param filterName Filter for activities that have a name starting with specified string (optional)
/// @param filterId Filter for activities with an id in the given comma separated list of ids (optional)
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
/// @return JSAPIPageResourceBareActivityResource_*
-(NSURLSessionTask*) getActivitiesWithFilterTemplate: (NSNumber*) filterTemplate
    filterName: (NSString*) filterName
    filterId: (NSString*) filterId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceBareActivityResource_* output, NSError* error)) handler;


/// Get a single activity
/// 
///
/// @param _id The id of the activity
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIActivityResource*
-(NSURLSessionTask*) getActivityWithId: (NSNumber*) _id
    completionHandler: (void (^)(JSAPIActivityResource* output, NSError* error)) handler;


/// Get a single activity template
/// 
///
/// @param _id The id of the template
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPITemplateResource*
-(NSURLSessionTask*) getActivityTemplateWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;


/// List and search activity templates
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
/// @return JSAPIPageResourceTemplateResource_*
-(NSURLSessionTask*) getActivityTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;


/// Sets the status of an activity occurrence to FINISHED and logs metrics
/// 
///
/// @param activityOccurrenceId The id of the activity occurrence
/// @param activityOccurrenceResults The activity occurrence object (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIActivityOccurrenceResults*
-(NSURLSessionTask*) setActivityOccurrenceResultsWithActivityOccurrenceId: (NSNumber*) activityOccurrenceId
    activityOccurrenceResults: (JSAPIActivityOccurrenceResults*) activityOccurrenceResults
    completionHandler: (void (^)(JSAPIActivityOccurrenceResults* output, NSError* error)) handler;


/// Update an activity
/// 
///
/// @param _id The id of the activity
/// @param activityResource The activity resource object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIActivityResource*
-(NSURLSessionTask*) updateActivityWithId: (NSNumber*) _id
    activityResource: (JSAPIActivityResource*) activityResource
    completionHandler: (void (^)(JSAPIActivityResource* output, NSError* error)) handler;


/// Updated the status of an activity occurrence
/// If setting to 'FINISHED' you must POST to /results instead to record the metrics and get synchronous reward results
///
/// @param activityOccurrenceId The id of the activity occurrence
/// @param activityCccurrenceStatus The activity occurrence status object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) updateActivityOccurrenceWithActivityOccurrenceId: (NSNumber*) activityOccurrenceId
    activityCccurrenceStatus: (NSString*) activityCccurrenceStatus
    completionHandler: (void (^)(NSError* error)) handler;


/// Update an activity template
/// 
///
/// @param _id The id of the template
/// @param activityTemplateResource The activity template resource object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPITemplateResource*
-(NSURLSessionTask*) updateActivityTemplateWithId: (NSString*) _id
    activityTemplateResource: (JSAPITemplateResource*) activityTemplateResource
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;



@end
