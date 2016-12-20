#import <Foundation/Foundation.h>
#import "SWGPageRewardSetResource_.h"
#import "SWGRewardSetResource.h"
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



@interface SWGCampaignsRewardsApi: NSObject <SWGApi>

extern NSString* kSWGCampaignsRewardsApiErrorDomain;
extern NSInteger kSWGCampaignsRewardsApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Create a reward set
///
/// @param rewardSetResource The reward set resource object (optional)
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGRewardSetResource*
-(NSNumber*) createRewardSetUsingPOSTWithRewardSetResource: (SWGRewardSetResource*) rewardSetResource
    completionHandler: (void (^)(SWGRewardSetResource* output, NSError* error)) handler;

/// Delete a reward set
///
/// @param _id The reward id
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
-(NSNumber*) deleteRewardSetUsingDELETEWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;

/// Get a single reward set
///
/// @param _id The reward id
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGRewardSetResource*
-(NSNumber*) getRewardSetUsingGETWithId: (NSNumber*) _id
    completionHandler: (void (^)(SWGRewardSetResource* output, NSError* error)) handler;

/// List and search reward sets
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPageRewardSetResource_*
-(NSNumber*) getRewardSetsUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageRewardSetResource_* output, NSError* error)) handler;

/// Update a reward set
///
/// @param _id The reward id
/// @param rewardSetResource The reward set resource object (optional)
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
-(NSNumber*) updateRewardSetUsingPUTWithId: (NSNumber*) _id
    rewardSetResource: (SWGRewardSetResource*) rewardSetResource
    completionHandler: (void (^)(NSError* error)) handler;


@end
