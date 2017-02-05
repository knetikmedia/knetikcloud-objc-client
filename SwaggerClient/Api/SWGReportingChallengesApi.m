#import "SWGReportingChallengesApi.h"
#import "SWGQueryParamCollection.h"
#import "SWGApiClient.h"
#import "SWGPageResourceChallengeEventParticipantResource_.h"


@interface SWGReportingChallengesApi ()

@property (nonatomic, strong, readwrite) NSMutableDictionary *mutableDefaultHeaders;

@end

@implementation SWGReportingChallengesApi

NSString* kSWGReportingChallengesApiErrorDomain = @"SWGReportingChallengesApiErrorDomain";
NSInteger kSWGReportingChallengesApiMissingParamErrorCode = 234513;

@synthesize apiClient = _apiClient;

#pragma mark - Initialize methods

- (instancetype) init {
    return [self initWithApiClient:[SWGApiClient sharedClient]];
}


-(instancetype) initWithApiClient:(SWGApiClient *)apiClient {
    self = [super init];
    if (self) {
        _apiClient = apiClient;
        _mutableDefaultHeaders = [NSMutableDictionary dictionary];
    }
    return self;
}

#pragma mark -

-(NSString*) defaultHeaderForKey:(NSString*)key {
    return self.mutableDefaultHeaders[key];
}

-(void) setDefaultHeaderValue:(NSString*) value forKey:(NSString*)key {
    [self.mutableDefaultHeaders setValue:value forKey:key];
}

-(NSDictionary *)defaultHeaders {
    return self.mutableDefaultHeaders;
}

#pragma mark - Api Methods

///
/// Retrieve a challenge event leaderboard details
/// Lists all leaderboard entries with additional user details
///  @param filterEvent A sepecific challenge event id (optional)
///
///  @returns SWGPageResourceChallengeEventParticipantResource_*
///
-(NSURLSessionTask*) getChallengeEventLeaderboardUsingGETWithFilterEvent: (NSNumber*) filterEvent
    completionHandler: (void (^)(SWGPageResourceChallengeEventParticipantResource_* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/reporting/events/leaderboard"];

    // remove format in URL if needed
    [resourcePath replaceOccurrencesOfString:@".{format}" withString:@".json" options:0 range:NSMakeRange(0,resourcePath.length)];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (filterEvent != nil) {
        queryParams[@"filter_event"] = filterEvent;
    }
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    // HTTP header `Accept`
    NSString *acceptHeader = [self.apiClient.sanitizer selectHeaderAccept:@[@"application/json"]];
    if(acceptHeader.length > 0) {
        headerParams[@"Accept"] = acceptHeader;
    }

    // response content type
    NSString *responseContentType = [[acceptHeader componentsSeparatedByString:@", "] firstObject] ?: @"";

    // request content type
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[@"knetik_oauth"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"GET"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"SWGPageResourceChallengeEventParticipantResource_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((SWGPageResourceChallengeEventParticipantResource_*)data, error);
                                }
                            }];
}

///
/// Retrieve a challenge event participant details
/// Lists all user submitted scores sorted by value, including those that do not apear in the leaderboard due to value or aggregation
///  @param filterEvent A sepecific challenge event id (optional)
///
///  @returns SWGPageResourceChallengeEventParticipantResource_*
///
-(NSURLSessionTask*) getChallengeEventParticipantsUsingGETWithFilterEvent: (NSNumber*) filterEvent
    completionHandler: (void (^)(SWGPageResourceChallengeEventParticipantResource_* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/reporting/events/participants"];

    // remove format in URL if needed
    [resourcePath replaceOccurrencesOfString:@".{format}" withString:@".json" options:0 range:NSMakeRange(0,resourcePath.length)];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (filterEvent != nil) {
        queryParams[@"filter_event"] = filterEvent;
    }
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    // HTTP header `Accept`
    NSString *acceptHeader = [self.apiClient.sanitizer selectHeaderAccept:@[@"application/json"]];
    if(acceptHeader.length > 0) {
        headerParams[@"Accept"] = acceptHeader;
    }

    // response content type
    NSString *responseContentType = [[acceptHeader componentsSeparatedByString:@", "] firstObject] ?: @"";

    // request content type
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[@"knetik_oauth"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"GET"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"SWGPageResourceChallengeEventParticipantResource_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((SWGPageResourceChallengeEventParticipantResource_*)data, error);
                                }
                            }];
}



@end
