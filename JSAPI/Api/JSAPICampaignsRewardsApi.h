#import <Foundation/Foundation.h>
#import "JSAPIPageResourceRewardSetResource_.h"
#import "JSAPIResult.h"
#import "JSAPIRewardSetResource.h"
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



@interface JSAPICampaignsRewardsApi: NSObject <JSAPIApi>

extern NSString* kJSAPICampaignsRewardsApiErrorDomain;
extern NSInteger kJSAPICampaignsRewardsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a reward set
/// <b>Permissions Needed:</b> REWARDS_ADMIN
///
/// @param rewardSetResource The reward set resource object (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIRewardSetResource*
-(NSURLSessionTask*) createRewardSetWithRewardSetResource: (JSAPIRewardSetResource*) rewardSetResource
    completionHandler: (void (^)(JSAPIRewardSetResource* output, NSError* error)) handler;


/// Delete a reward set
/// <b>Permissions Needed:</b> REWARDS_ADMIN
///
/// @param _id The reward id
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteRewardSetWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single reward set
/// <b>Permissions Needed:</b> ANY
///
/// @param _id The reward id
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIRewardSetResource*
-(NSURLSessionTask*) getRewardSetWithId: (NSNumber*) _id
    completionHandler: (void (^)(JSAPIRewardSetResource* output, NSError* error)) handler;


/// List and search reward sets
/// <b>Permissions Needed:</b> ANY
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
/// @return JSAPIPageResourceRewardSetResource_*
-(NSURLSessionTask*) getRewardSetsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceRewardSetResource_* output, NSError* error)) handler;


/// Update a reward set
/// <b>Permissions Needed:</b> REWARDS_ADMIN
///
/// @param _id The reward id
/// @param rewardSetResource The reward set resource object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIRewardSetResource*
-(NSURLSessionTask*) updateRewardSetWithId: (NSNumber*) _id
    rewardSetResource: (JSAPIRewardSetResource*) rewardSetResource
    completionHandler: (void (^)(JSAPIRewardSetResource* output, NSError* error)) handler;



@end
