#import <Foundation/Foundation.h>
#import "SWGPageResourceChallengeEventParticipantResource_.h"
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



@interface SWGReportingChallengesApi: NSObject <SWGApi>

extern NSString* kSWGReportingChallengesApiErrorDomain;
extern NSInteger kSWGReportingChallengesApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Retrieve a challenge event leaderboard details
/// Lists all leaderboard entries with additional user details
///
/// @param filterEvent A sepecific challenge event id (optional)
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPageResourceChallengeEventParticipantResource_*
-(NSNumber*) getChallengeEventLeaderboardUsingGETWithFilterEvent: (NSNumber*) filterEvent
    completionHandler: (void (^)(SWGPageResourceChallengeEventParticipantResource_* output, NSError* error)) handler;

/// Retrieve a challenge event participant details
/// Lists all user submitted scores sorted by value, including those that do not apear in the leaderboard due to value or aggregation
///
/// @param filterEvent A sepecific challenge event id (optional)
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPageResourceChallengeEventParticipantResource_*
-(NSNumber*) getChallengeEventParticipantsUsingGETWithFilterEvent: (NSNumber*) filterEvent
    completionHandler: (void (^)(SWGPageResourceChallengeEventParticipantResource_* output, NSError* error)) handler;


@end
