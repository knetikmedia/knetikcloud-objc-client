#import "JSAPIRuleEngineActionsApi.h"
#import "JSAPIQueryParamCollection.h"
#import "JSAPIApiClient.h"
#import "JSAPIActionResource.h"
#import "JSAPIResult.h"


@interface JSAPIRuleEngineActionsApi ()

@property (nonatomic, strong, readwrite) NSMutableDictionary *mutableDefaultHeaders;

@end

@implementation JSAPIRuleEngineActionsApi

NSString* kJSAPIRuleEngineActionsApiErrorDomain = @"JSAPIRuleEngineActionsApiErrorDomain";
NSInteger kJSAPIRuleEngineActionsApiMissingParamErrorCode = 234513;

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
/// Get a list of available actions
/// <b>Permissions Needed:</b> BRE_RULE_ENGINE_ACTIONS_USER
///  @param filterCategory Filter for actions that are within a specific category (optional)
///
///  @param filterName Filter for actions that have names containing the given string (optional)
///
///  @param filterTags Filter for actions that have all of the given tags (comma separated list) (optional)
///
///  @param filterSearch Filter for actions containing the given words somewhere within name, description and tags (optional)
///
///  @returns NSArray<JSAPIActionResource>*
///
-(NSURLSessionTask*) getBREActionsWithFilterCategory: (NSString*) filterCategory
    filterName: (NSString*) filterName
    filterTags: (NSString*) filterTags
    filterSearch: (NSString*) filterSearch
    completionHandler: (void (^)(NSArray<JSAPIActionResource>* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/bre/actions"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (filterCategory != nil) {
        queryParams[@"filter_category"] = filterCategory;
    }
    if (filterName != nil) {
        queryParams[@"filter_name"] = filterName;
    }
    if (filterTags != nil) {
        queryParams[@"filter_tags"] = filterTags;
    }
    if (filterSearch != nil) {
        queryParams[@"filter_search"] = filterSearch;
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
                              responseType: @"NSArray<JSAPIActionResource>*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((NSArray<JSAPIActionResource>*)data, error);
                                }
                            }];
}



@end
