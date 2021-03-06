#import <Foundation/Foundation.h>
#import "JSAPILeaderboardEntryResource.h"
#import "JSAPILeaderboardResource.h"
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



@interface JSAPIGamificationLeaderboardsApi: NSObject <JSAPIApi>

extern NSString* kJSAPIGamificationLeaderboardsApiErrorDomain;
extern NSInteger kJSAPIGamificationLeaderboardsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Retrieves leaderboard details and paginated entries
/// The context type identifies the type of entity (i.e., 'activity') being tracked on the leaderboard. The context ID is the unique ID of the actual entity tracked by the leaderboard. Sorting is based on the fields of LeaderboardEntryResource rather than the returned LeaderboardResource. <br><br><b>Permissions Needed:</b> ANY
///
/// @param contextType The context type for the leaderboard
/// @param contextId The context id for the leaderboard
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to score:DESC,updated:ASC,user_id:ASC)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPILeaderboardResource*
-(NSURLSessionTask*) getLeaderboardWithContextType: (NSString*) contextType
    contextId: (NSString*) contextId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPILeaderboardResource* output, NSError* error)) handler;


/// Retrieves a specific user entry with rank
/// The context type identifies the type of entity (i.e., 'activity') being tracked on the leaderboard. The context ID is the unique ID of the actual entity tracked by the leaderboard. <br><br><b>Permissions Needed:</b> ANY
///
/// @param contextType The context type for the leaderboard
/// @param contextId The context id for the leaderboard
/// @param _id The id of a user
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPILeaderboardEntryResource*
-(NSURLSessionTask*) getLeaderboardRankWithContextType: (NSString*) contextType
    contextId: (NSString*) contextId
    _id: (NSString*) _id
    completionHandler: (void (^)(JSAPILeaderboardEntryResource* output, NSError* error)) handler;


/// Get a list of available leaderboard strategy names
/// <b>Permissions Needed:</b> ANY
///
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<NSString*>*
-(NSURLSessionTask*) getLeaderboardStrategiesWithCompletionHandler: 
    (void (^)(NSArray<NSString*>* output, NSError* error)) handler;



@end
