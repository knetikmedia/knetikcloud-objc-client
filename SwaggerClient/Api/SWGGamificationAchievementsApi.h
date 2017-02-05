#import <Foundation/Foundation.h>
#import "SWGAchievementDefinitionResource.h"
#import "SWGAchievementProgressUpdateRequest.h"
#import "SWGBreTriggerResource.h"
#import "SWGPageResourceAchievementDefinitionResource_.h"
#import "SWGPageResourceTemplateResource_.h"
#import "SWGPageResourceUserAchievementGroupResource_.h"
#import "SWGTemplateResource.h"
#import "SWGUserAchievementGroupResource.h"
#import "SWGApi.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://demo.sandbox.knetikcloud.com
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGGamificationAchievementsApi: NSObject <SWGApi>

extern NSString* kSWGGamificationAchievementsApiErrorDomain;
extern NSInteger kSWGGamificationAchievementsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a new achievement definition
/// If the definition contains a trigger event name, a BRE rule is created, so that tracking logic is executed when the triggering event occurs. If no trigger event name is specified, the user's achievement status must manually be updated via the API.
///
/// @param achievement The achievement definition (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGAchievementDefinitionResource*
-(NSURLSessionTask*) createAchievementUsingPOSTWithAchievement: (SWGAchievementDefinitionResource*) achievement
    completionHandler: (void (^)(SWGAchievementDefinitionResource* output, NSError* error)) handler;


/// Create an achievement template
/// Achievement templates define a type of achievement and the properties they have
///
/// @param template The achievement template to be created (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGTemplateResource*
-(NSURLSessionTask*) createTemplateUsingPOSTWithTemplate: (SWGTemplateResource*) template
    completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;


/// Delete an achievement template
/// If cascade = 'detach', it will force delete the template even if it's attached to other objects
///
/// @param _id The id of the template
/// @param cascade The value needed to delete used templates (optional)
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSURLSessionTask*) deleteAchievementTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete an achievement definition
/// Will also disable the associated generated rule, if any.
///
/// @param name The name of the achievement
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSURLSessionTask*) deleteAchievementUsingDELETEWithName: (NSString*) name
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a list of derived achievements
/// Used by other services that depend on achievements
///
/// @param name The name of the derived achievement
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<SWGAchievementDefinitionResource>*
-(NSURLSessionTask*) findAllByGroupNameUsingGETWithName: (NSString*) name
    completionHandler: (void (^)(NSArray<SWGAchievementDefinitionResource>* output, NSError* error)) handler;


/// Get a single achievement template
/// 
///
/// @param _id The id of the template
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGTemplateResource*
-(NSURLSessionTask*) getAchievementTemplateUsingGETWithId: (NSString*) _id
    completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;


/// List and search achievement templates
/// 
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageResourceTemplateResource_*
-(NSURLSessionTask*) getAchievementTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceTemplateResource_* output, NSError* error)) handler;


/// Get a single achievement definition
/// 
///
/// @param name The name of the achievement
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGAchievementDefinitionResource*
-(NSURLSessionTask*) getAchievementUsingGETWithName: (NSString*) name
    completionHandler: (void (^)(SWGAchievementDefinitionResource* output, NSError* error)) handler;


/// Get all achievement definitions in the system
/// 
///
/// @param filterTagset Filter for achievements with specified tags (separated by comma) (optional)
/// @param filterName Filter for achievements whose name contains a string (optional)
/// @param filterHidden Filter for achievements that are hidden or not (optional)
/// @param filterDerived Filter for achievements that are derived from other services (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to name:ASC)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageResourceAchievementDefinitionResource_*
-(NSURLSessionTask*) getAchievementsUsingGETWithFilterTagset: (NSString*) filterTagset
    filterName: (NSString*) filterName
    filterHidden: (NSNumber*) filterHidden
    filterDerived: (NSNumber*) filterDerived
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceAchievementDefinitionResource_* output, NSError* error)) handler;


/// Retrieve progress on a given achievement for all users
/// Assets will not be filled in on the resources returned. Use 'Get single achievement progress for user' to retrieve the full resource with assets for a given user as needed.
///
/// @param achievementName The achievement&#39;s name
/// @param filterAchievementDerived Filter for achievements that are derived from other services (optional)
/// @param filterAchievementTagset Filter for achievements with specified tags (separated by comma) (optional)
/// @param filterAchievementHidden Filter for achievements that are hidden or not (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageResourceUserAchievementGroupResource_*
-(NSURLSessionTask*) getAllUserProgressForAchievementUsingGETWithAchievementName: (NSString*) achievementName
    filterAchievementDerived: (NSNumber*) filterAchievementDerived
    filterAchievementTagset: (NSString*) filterAchievementTagset
    filterAchievementHidden: (NSNumber*) filterAchievementHidden
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(SWGPageResourceUserAchievementGroupResource_* output, NSError* error)) handler;


/// Retrieve progress on achievements for all users
/// Assets will not be filled in on the resources returned. Use 'Get single achievement progress for user' to retrieve the full resource with assets for a given user as needed.
///
/// @param filterAchievementDerived Filter for achievements that are derived from other services (optional)
/// @param filterAchievementTagset Filter for achievements with specified tags (separated by comma) (optional)
/// @param filterAchievementName Filter for achievements whose name contains a string (optional)
/// @param filterAchievementHidden Filter for achievements that are hidden or not (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageResourceUserAchievementGroupResource_*
-(NSURLSessionTask*) getAllUserProgressUsingGETWithFilterAchievementDerived: (NSNumber*) filterAchievementDerived
    filterAchievementTagset: (NSString*) filterAchievementTagset
    filterAchievementName: (NSString*) filterAchievementName
    filterAchievementHidden: (NSNumber*) filterAchievementHidden
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(SWGPageResourceUserAchievementGroupResource_* output, NSError* error)) handler;


/// Get the list of triggers that can be used to trigger an achievement progress update
/// 
///
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<SWGBreTriggerResource>*
-(NSURLSessionTask*) getAvailableTriggersUsingGETWithCompletionHandler: 
    (void (^)(NSArray<SWGBreTriggerResource>* output, NSError* error)) handler;


/// Retrieve progress on a given achievement for a given user
/// Assets will not be filled in on the resources returned. Use 'Get a single poll' to retrieve the full resource with assets for a given item as needed.
///
/// @param userId The user&#39;s id
/// @param achievementName The achievement&#39;s name
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGUserAchievementGroupResource*
-(NSURLSessionTask*) getUserProgressForAchievementUsingGETWithUserId: (NSNumber*) userId
    achievementName: (NSString*) achievementName
    completionHandler: (void (^)(SWGUserAchievementGroupResource* output, NSError* error)) handler;


/// Retrieve progress on achievements for a given user
/// Assets will not be filled in on the resources returned. Use 'Get a single poll' to retrieve the full resource with assets for a given item as needed.
///
/// @param userId The user&#39;s id
/// @param filterAchievementDerived Filter for achievements that are derived from other services (optional)
/// @param filterAchievementTagset Filter for achievements with specified tags (separated by comma) (optional)
/// @param filterAchievementName Filter for achievements whose name contains a string (optional)
/// @param filterAchievementHidden Filter for achievements that are hidden or not (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageResourceUserAchievementGroupResource_*
-(NSURLSessionTask*) getUserProgressUsingGETWithUserId: (NSNumber*) userId
    filterAchievementDerived: (NSNumber*) filterAchievementDerived
    filterAchievementTagset: (NSString*) filterAchievementTagset
    filterAchievementName: (NSString*) filterAchievementName
    filterAchievementHidden: (NSNumber*) filterAchievementHidden
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(SWGPageResourceUserAchievementGroupResource_* output, NSError* error)) handler;


/// Update an achievement definition
/// The existing generated rule, if any, will be deleted. A new rule will be created if a trigger event name is specified in the new version.
///
/// @param name The name of the achievement
/// @param achievement The achievement definition (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) updateAchievementUsingPUTWithName: (NSString*) name
    achievement: (SWGAchievementDefinitionResource*) achievement
    completionHandler: (void (^)(NSError* error)) handler;


/// Update or create an achievement progress record for a user
/// If no progress record yet exists for the user, it will be created. Otherwise it will be updated. If progress meets or exceeds the achievement's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>.
///
/// @param userId The user&#39;s id
/// @param achievementName The achievement&#39;s name
/// @param request The progress update details (optional)
/// 
///  code:200 message:"OK",
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGUserAchievementGroupResource*
-(NSURLSessionTask*) updateProgressUsingPUTWithUserId: (NSNumber*) userId
    achievementName: (NSString*) achievementName
    request: (SWGAchievementProgressUpdateRequest*) request
    completionHandler: (void (^)(SWGUserAchievementGroupResource* output, NSError* error)) handler;


/// Update an achievement template
/// 
///
/// @param _id The id of the template
/// @param template The updated template (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) updateTemplateUsingPUTWithId: (NSString*) _id
    template: (SWGTemplateResource*) template
    completionHandler: (void (^)(NSError* error)) handler;



@end
