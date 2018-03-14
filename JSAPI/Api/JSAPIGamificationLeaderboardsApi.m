#import "JSAPIGamificationLeaderboardsApi.h"
#import "JSAPIQueryParamCollection.h"
#import "JSAPIApiClient.h"
#import "JSAPILeaderboardEntryResource.h"
#import "JSAPILeaderboardResource.h"
#import "JSAPIResult.h"


@interface JSAPIGamificationLeaderboardsApi ()

@property (nonatomic, strong, readwrite) NSMutableDictionary *mutableDefaultHeaders;

@end

@implementation JSAPIGamificationLeaderboardsApi

NSString* kJSAPIGamificationLeaderboardsApiErrorDomain = @"JSAPIGamificationLeaderboardsApiErrorDomain";
NSInteger kJSAPIGamificationLeaderboardsApiMissingParamErrorCode = 234513;

@synthesize apiClient = _apiClient;

#pragma mark - Initialize methods

- (instancetype) init {
    return [self initWithApiClient:[JSAPIApiClient sharedClient]];
}


-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient {
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
/// Retrieves leaderboard details and paginated entries
/// The context type identifies the type of entity (i.e., 'activity') being tracked on the leaderboard. The context ID is the unique ID of the actual entity tracked by the leaderboard. Sorting is based on the fields of LeaderboardEntryResource rather than the returned LeaderboardResource. <br><br><b>Permissions Needed:</b> ANY
///  @param contextType The context type for the leaderboard 
///
///  @param contextId The context id for the leaderboard 
///
///  @param size The number of objects returned per page (optional, default to 25)
///
///  @param page The number of the page returned, starting with 1 (optional, default to 1)
///
///  @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to score:DESC,updated:ASC,user_id:ASC)
///
///  @returns JSAPILeaderboardResource*
///
-(NSURLSessionTask*) getLeaderboardWithContextType: (NSString*) contextType
    contextId: (NSString*) contextId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPILeaderboardResource* output, NSError* error)) handler {
    // verify the required parameter 'contextType' is set
    if (contextType == nil) {
        NSParameterAssert(contextType);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"contextType"] };
            NSError* error = [NSError errorWithDomain:kJSAPIGamificationLeaderboardsApiErrorDomain code:kJSAPIGamificationLeaderboardsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'contextId' is set
    if (contextId == nil) {
        NSParameterAssert(contextId);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"contextId"] };
            NSError* error = [NSError errorWithDomain:kJSAPIGamificationLeaderboardsApiErrorDomain code:kJSAPIGamificationLeaderboardsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/leaderboards/{context_type}/{context_id}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (contextType != nil) {
        pathParams[@"context_type"] = contextType;
    }
    if (contextId != nil) {
        pathParams[@"context_id"] = contextId;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (size != nil) {
        queryParams[@"size"] = size;
    }
    if (page != nil) {
        queryParams[@"page"] = page;
    }
    if (order != nil) {
        queryParams[@"order"] = order;
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
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[]];

    // Authentication setting
    NSArray *authSettings = @[@"oauth2_client_credentials_grant", @"oauth2_password_grant"];

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
                              responseType: @"JSAPILeaderboardResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPILeaderboardResource*)data, error);
                                }
                            }];
}

///
/// Retrieves a specific user entry with rank
/// The context type identifies the type of entity (i.e., 'activity') being tracked on the leaderboard. The context ID is the unique ID of the actual entity tracked by the leaderboard. <br><br><b>Permissions Needed:</b> ANY
///  @param contextType The context type for the leaderboard 
///
///  @param contextId The context id for the leaderboard 
///
///  @param _id The id of a user 
///
///  @returns JSAPILeaderboardEntryResource*
///
-(NSURLSessionTask*) getLeaderboardRankWithContextType: (NSString*) contextType
    contextId: (NSString*) contextId
    _id: (NSString*) _id
    completionHandler: (void (^)(JSAPILeaderboardEntryResource* output, NSError* error)) handler {
    // verify the required parameter 'contextType' is set
    if (contextType == nil) {
        NSParameterAssert(contextType);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"contextType"] };
            NSError* error = [NSError errorWithDomain:kJSAPIGamificationLeaderboardsApiErrorDomain code:kJSAPIGamificationLeaderboardsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'contextId' is set
    if (contextId == nil) {
        NSParameterAssert(contextId);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"contextId"] };
            NSError* error = [NSError errorWithDomain:kJSAPIGamificationLeaderboardsApiErrorDomain code:kJSAPIGamificationLeaderboardsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter '_id' is set
    if (_id == nil) {
        NSParameterAssert(_id);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"_id"] };
            NSError* error = [NSError errorWithDomain:kJSAPIGamificationLeaderboardsApiErrorDomain code:kJSAPIGamificationLeaderboardsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/leaderboards/{context_type}/{context_id}/users/{id}/rank"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (contextType != nil) {
        pathParams[@"context_type"] = contextType;
    }
    if (contextId != nil) {
        pathParams[@"context_id"] = contextId;
    }
    if (_id != nil) {
        pathParams[@"id"] = _id;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
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
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[]];

    // Authentication setting
    NSArray *authSettings = @[@"oauth2_client_credentials_grant", @"oauth2_password_grant"];

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
                              responseType: @"JSAPILeaderboardEntryResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPILeaderboardEntryResource*)data, error);
                                }
                            }];
}

///
/// Get a list of available leaderboard strategy names
/// <b>Permissions Needed:</b> ANY
///  @returns NSArray<NSString*>*
///
-(NSURLSessionTask*) getLeaderboardStrategiesWithCompletionHandler: 
    (void (^)(NSArray<NSString*>* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/leaderboards/strategies"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
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
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[]];

    // Authentication setting
    NSArray *authSettings = @[@"oauth2_client_credentials_grant", @"oauth2_password_grant"];

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
                              responseType: @"NSArray<NSString*>*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((NSArray<NSString*>*)data, error);
                                }
                            }];
}



@end
