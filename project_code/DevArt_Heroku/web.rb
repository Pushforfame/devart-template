require 'sinatra'
require 'rubygems' 

get '/' do
  # "BaBoYa3"
  # erb :devArt
  erb :map
end

# location
get '/nyu_main' do
	erb :nyu_main
end

get '/nyu' do
	erb :nyu
end

get '/ada' do
	erb :ada
end

# others
get '/highlights' do
	erb :highlights_2
end

get '/aboutus' do
	erb :aboutus
end

get '/people' do
	erb :people_2
end



