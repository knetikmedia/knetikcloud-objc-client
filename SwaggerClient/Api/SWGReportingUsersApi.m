#import "SWGReportingUsersApi.h"
#import "SWGQueryParamCollection.h"
#import "SWGPageResourceAggregateCountResource_.h"


@interface SWGReportingUsersApi ()

@property (nonatomic, strong) NSMutableDictionary *defaultHeaders;

@end

@implementation SWGReportingUsersApi

NSString* kSWGReportingUsersApiErrorDomain = @"SWGReportingUsersApiErrorDomain";
NSInteger kSWGReportingUsersApiMissingParamErrorCode = 234513;

@synthesize apiClient = _apiClient;

#pragma mark - Initialize methods

- (instancetype) init {
    self = [super init];
    if (self) {
        SWGConfiguration *config = [SWGConfiguration sharedConfig];
        if (config.apiClient == nil) {
            config.apiClient = [[SWGApiClient alloc] init];
        }
        _apiClient = config.apiClient;
        _defaultHeaders = [NSMutableDictionary dictionary];
    }
    return self;
}

- (id) initWithApiClient:(SWGApiClient *)apiClient {
    self = [super init];
    if (self) {
        _apiClient = apiClient;
        _defaultHeaders = [NSMutableDictionary dictionary];
    }
    return self;
}

#pragma mark -

+ (instancetype)sharedAPI {
    static SWGReportingUsersApi *sharedAPI;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        sharedAPI = [[self alloc] init];
    });
    return sharedAPI;
}

-(NSString*) defaultHeaderForKey:(NSString*)key {
    return self.defaultHeaders[key];
}

-(void) addHeader:(NSString*)value forKey:(NSString*)key {
    [self setDefaultHeaderValue:value forKey:key];
}

-(void) setDefaultHeaderValue:(NSString*) value forKey:(NSString*)key {
    [self.defaultHeaders setValue:value forKey:key];
}

-(NSUInteger) requestQueueSize {
    return [SWGApiClient requestQueueSize];
}

#pragma mark - Api Methods

///
/// Get user registration info
/// Get user registration counts grouped by time range
/// @param granularity The time duration to aggregate by (optional, default to day)
///
/// @param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time (optional)
///
/// @param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time (optional)
///
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPageResourceAggregateCountResource_*
-(NSNumber*) executiveRevenueItemSalesUsingGET1WithGranularity: (NSString*) granularity
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    completionHandler: (void (^)(SWGPageResourceAggregateCountResource_* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/reporting/users/registrations"];

    // remove format in URL if needed
    [resourcePath replaceOccurrencesOfString:@".{format}" withString:@".json" options:0 range:NSMakeRange(0,resourcePath.length)];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (granularity != nil) {
        queryParams[@"granularity"] = granularity;
    }
    if (startDate != nil) {
        queryParams[@"start_date"] = startDate;
    }
    if (endDate != nil) {
        queryParams[@"end_date"] = endDate;
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
                              responseType: @"SWGPageResourceAggregateCountResource_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((SWGPageResourceAggregateCountResource_*)data, error);
                                }
                           }
          ];
}


@end
