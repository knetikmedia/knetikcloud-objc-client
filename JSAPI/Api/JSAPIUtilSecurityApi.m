#import "JSAPIUtilSecurityApi.h"
#import "JSAPIQueryParamCollection.h"
#import "JSAPIApiClient.h"
#import "JSAPIPageResourceLocationLogResource_.h"
#import "JSAPIResult.h"
#import "JSAPITokenDetailsResource.h"


@interface JSAPIUtilSecurityApi ()

@property (nonatomic, strong, readwrite) NSMutableDictionary *mutableDefaultHeaders;

@end

@implementation JSAPIUtilSecurityApi

NSString* kJSAPIUtilSecurityApiErrorDomain = @"JSAPIUtilSecurityApiErrorDomain";
NSInteger kJSAPIUtilSecurityApiMissingParamErrorCode = 234513;

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
/// Returns the authentication log for a user
/// A log entry is recorded everytime a user requests a new token. Standard pagination available
///  @param userId The user id (optional)
///
///  @returns JSAPIPageResourceLocationLogResource_*
///
-(NSURLSessionTask*) getUserLocationLogWithUserId: (NSNumber*) userId
    completionHandler: (void (^)(JSAPIPageResourceLocationLogResource_* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/security/country-log"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (userId != nil) {
        queryParams[@"user_id"] = userId;
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
    NSArray *authSettings = @[@"OAuth2"];

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
                              responseType: @"JSAPIPageResourceLocationLogResource_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIPageResourceLocationLogResource_*)data, error);
                                }
                            }];
}

///
/// Returns the authentication token details. Use /users endpoint for detailed user's info
/// 
///  @returns JSAPITokenDetailsResource*
///
-(NSURLSessionTask*) getUserTokenDetailsWithCompletionHandler: 
    (void (^)(JSAPITokenDetailsResource* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/me"];

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
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[@"OAuth2"];

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
                              responseType: @"JSAPITokenDetailsResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPITokenDetailsResource*)data, error);
                                }
                            }];
}



@end
