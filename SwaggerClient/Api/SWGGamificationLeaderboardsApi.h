#import <Foundation/Foundation.h>
#import "SWGLeaderboardEntryResource.h"
#import "SWGLeaderboardResource.h"
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



@interface SWGGamificationLeaderboardsApi: NSObject <SWGApi>

extern NSString* kSWGGamificationLeaderboardsApiErrorDomain;
extern NSInteger kSWGGamificationLeaderboardsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Retrieves leaderboard details and paginated entries
/// The context type identifies the type of entity (i.e., 'activity') being tracked on the leaderboard. The context ID is the unique ID of the actual entity tracked by the leaderboard.
///
/// @param contextType The context type for the leaderboard
/// @param contextId The context id for the leaderboard
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGLeaderboardResource*
-(NSURLSessionTask*) getLeaderboardUsingGETWithContextType: (NSString*) contextType
    contextId: (NSString*) contextId
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(SWGLeaderboardResource* output, NSError* error)) handler;


/// Get a list of available leaderboard strategy names
/// 
///
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<NSString*>*
-(NSURLSessionTask*) getStrategiesUsingGETWithCompletionHandler: 
    (void (^)(NSArray<NSString*>* output, NSError* error)) handler;


/// Retrieves a specific user entry with rank
/// The context type identifies the type of entity (i.e., 'activity') being tracked on the leaderboard. The context ID is the unique ID of the actual entity tracked by the leaderboard
///
/// @param contextType The context type for the leaderboard
/// @param contextId The context id for the leaderboard
/// @param _id The id of a user
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGLeaderboardEntryResource*
-(NSURLSessionTask*) getUserRankUsingGETWithContextType: (NSString*) contextType
    contextId: (NSString*) contextId
    _id: (NSString*) _id
    completionHandler: (void (^)(SWGLeaderboardEntryResource* output, NSError* error)) handler;



@end
